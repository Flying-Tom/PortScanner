#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <mythread.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 0; i < 10; i++){
        threadArray[i] = nullptr;
    }

    ui->labelComplete->hide();

    //    QString ip = "47.110.136.219";
    //    QList<int> l;
    //    l.append(80);
    //    l.append(81);
    //    l.append(82);
    //    l.append(83);
    //    l.append(84);
    //    QString ip2 = "47.110.136.220";
    //    QString ip3 = "47.110.136.221";

    //    MyThread * t = new MyThread(&ip, &l, 1000);
    //    MyThread * t1 = new MyThread(&ip2, &l, 1000);
    //    MyThread * t2 = new MyThread(&ip3, &l, 1000);

    //    connect(t, SIGNAL(done(QString *, int, bool)), this, SLOT(updateUI(QString *, int, bool)));
    //    connect(t1, SIGNAL(done(QString *, int, bool)), this, SLOT(updateUI(QString *, int, bool)));
    //    connect(t2, SIGNAL(done(QString *, int, bool)), this, SLOT(updateUI(QString *, int, bool)));

    //    threadArray[0] = t;
    //    threadArray[1] = t1;
    //    threadArray[2] = t2;

    //    threadArray[0]->start();
    //    threadArray[1]->start();
    //    threadArray[2]->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString ip2str(uint32_t ip){
    uchar ip1 = 0, ip2 = 0, ip3 = 0, ip4 = 0;
    ip4 = static_cast<uchar>(ip % (1 << 8));
    ip >>= 8;
    ip3 = static_cast<uchar>(ip % (1 << 8));
    ip >>= 8;
    ip2 = static_cast<uchar>(ip % (1 << 8));
    ip >>= 8;
    ip1 = static_cast<uchar>(ip % (1 << 8));
    ip >>= 8;

    QString s("");
    s.append(QString::number(ip1)); s.append(".");
    s.append(QString::number(ip2)); s.append(".");
    s.append(QString::number(ip3)); s.append(".");
    s.append(QString::number(ip4));
    return s;
}

QStringList* MainWindow::getIPList(){
    QStringList* ipList = new QStringList ();

    uint32_t startIP1 = static_cast<uint32_t>(ui->startIP1->value());
    uint32_t startIP2 = static_cast<uint32_t>(ui->startIP2->value());
    uint32_t startIP3 = static_cast<uint32_t>(ui->startIP3->value());
    uint32_t startIP4 = static_cast<uint32_t>(ui->startIP4->value());
    uint32_t startIP = 0;
    startIP += startIP1;
    startIP <<= 8;
    startIP += startIP2;
    startIP <<= 8;
    startIP += startIP3;
    startIP <<= 8;
    startIP += startIP4;

    uint32_t endIP1 = static_cast<uint32_t>(ui->endIP1->value());
    uint32_t endIP2 = static_cast<uint32_t>(ui->endIP2->value());
    uint32_t endIP3 = static_cast<uint32_t>(ui->endIP3->value());
    uint32_t endIP4 = static_cast<uint32_t>(ui->endIP4->value());
    uint32_t endIP = 0;
    endIP += endIP1;
    endIP <<= 8;
    endIP += endIP2;
    endIP <<= 8;
    endIP += endIP3;
    endIP <<= 8;
    endIP += endIP4;
    if(endIP - startIP >= 65536){
        ui->scanInfo->append("Too many IP addressed to scan!");
        return ipList;
    }
    for(uint32_t ip = startIP; ip <= endIP; ip++){
        ipList->append(ip2str(ip));
    }
    return ipList;
}

void MainWindow::on_btnStartScan_clicked()
{
    ui->labelComplete->hide();
    ui->btnStartScan->setEnabled(false);
    ui->scanInfo->clear();
    ui->openPortInfo->clear();
    cnt = 0;

    qDebug() << "Start button clicked, start scanning!";
    qDebug() << "------------------------------------";
    ui->scanInfo->append("Start scanning!");
    ui->scanInfo->append("------------------------------------");
    QStringList* ipList = getIPList();

    if(ipList->size() <= 0){
        qDebug() << "IP range error!";
        ui->scanInfo->append("IP range error!");
        ui->scanInfo->append("Please check the IP range input!");
        delete ipList;
        return;
    }

    int threadNum = ui->threadNum->value();
    int startPort = ui->startPort->value();
    int endPort = ui->endPort->value();
    int portNum = endPort - startPort + 1;
    int timeout = ui->timeout->value();

    if(endPort < startPort){
        qDebug() << "Port range error!";
        ui->scanInfo->append("Port range error!");
        ui->scanInfo->append("Please check the port range input!");
        delete ipList;
        return;
    }

    ui->scanInfo->append(QString::number(ipList->size()) + " IP addresses to scan...");
    ui->scanInfo->append("From "+ipList->first() + " to " + ipList->last());

    QList<int>* portListArray[threadNum];
    for(int i = 0; i < threadNum; i++){
        portListArray[i] = new QList<int>();
    }

    int portNumPerThread = portNum / threadNum;
    if(portNum % threadNum != 0){
        portNumPerThread++;
    }
    for(int i = startPort; i <= endPort; i++){
        portListArray[(i - startPort) / portNumPerThread]->append(i);
    }

    for(QString ip : (*ipList)){
        for(int i = 0; i < threadNum; i++){
            qDebug() << "start thread " << i;
            threadArray[i] = new MyThread(&ip, portListArray[i], timeout);
            connect(threadArray[i], SIGNAL(done(QString *, int, bool)), this, SLOT(updateUI(QString *, int, bool)));
            // threadFinish
            connect(threadArray[i], SIGNAL(finish(MyThread *)), this, SLOT(threadFinish(MyThread *)));
            threadArray[i]->start();
        }
    }

//    while(1){
//        bool hasNotFinished = false;
//        for(int i = 0; i < 10; i++){
//            if(threadArray[i] != nullptr && threadArray[i]->isRunning()){
//                hasNotFinished = true;
//                break;
//            }else{
//                threadArray[i] = nullptr;
//            }
//        }
//        if(hasNotFinished){
//            QThread::sleep(1);
//        }
//        else
//            break;
//    }
//    ui->btnStartScan->setDisabled(false);
    delete ipList;
}

void MainWindow::on_btnStopScan_clicked()
{
    qDebug() << "Click stop scan...";
    for(int i = 0; i < 10; i++){
        if(threadArray[i] != nullptr && threadArray[i]->isRunning()){
            qDebug() << "stop thread " << i;
            threadArray[i]->terminate();
            threadArray[i] = nullptr;
        }
    }
    ui->btnStartScan->setEnabled(true);
}

void MainWindow::updateUI(QString *ip, int port, bool isOpen){
    cnt++;
    qDebug() << "Main thread: " << (*ip) + ": " + QString::number(port) + " [" + (isOpen?"open":"close") + "]";
    ui->scanInfo->append(QString::number(cnt) + ":   " + (*ip) + ": " + QString::number(port) + " [" + (isOpen?"open":"close") + "]");
    if(isOpen){
        ui->openPortInfo->append(QString::number(cnt)+ ":   " + (*ip) + ": " + QString::number(port) + " [" + (isOpen?"open":"close") + "]");
    }
    for(int i = 0; i < 10; i++){
//        qDebug() << threadArray[i];
        if(threadArray[i] != nullptr && !threadArray[i]->isRunning()){
            threadArray[i] = nullptr;
        }
    }
    QCoreApplication::processEvents();
}

void MainWindow::threadFinish(MyThread *p){
    bool allFinished = true;
    for(int i = 0; i < 10; i++){
        if(threadArray[i] != nullptr && threadArray[i]->isRunning()){
            allFinished = false;
        }
        if(threadArray[i] != nullptr && !threadArray[i]->isRunning()){
            delete threadArray[i];
            threadArray[i] = nullptr;
        }
    }
    if(allFinished){
        ui->btnStartScan->setEnabled(true);
        ui->labelComplete->setStyleSheet("color:red;");
        ui->labelComplete->show();
    }
}
