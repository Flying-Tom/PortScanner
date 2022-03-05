#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    qDebug() << "This is a scanner!\n";
//    QTcpSocket* socket_ = new QTcpSocket();
//    char * ip = "47.110.136.219";
//    for(int i = 10; i < 30; i++){
//        bool b = testPort(socket_, ip, i, 10);
//        qDebug() << ip << "["<<i<<"]"<<b;

//    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::testPort(QTcpSocket * socket_, char* ip, uint16_t port, int timeout){
    socket_->close();
    socket_->connectToHost(ip, port);
    if(socket_->waitForConnected(timeout)) {
        return true; // connect success
    }else{
        return false;
    }
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

bool testConnection(QString ip, uint16_t port, int timeout){
    QTcpSocket* socket_ = new QTcpSocket () ;
    socket_->connectToHost(ip, port);
    if(socket_->waitForConnected(timeout)) {
        socket_->close();
        delete socket_;
        return true; // connect success
    }else{
        socket_->close();
        delete socket_;
        return false;
    }
}

void MainWindow::scan(QStringList* ipList, uint16_t startPort, uint16_t endPort, int timeout){
    for(QString ip : (*ipList)){
        for(uint16_t port = startPort; port <= endPort; port++){
            bool b = testConnection(ip, port, timeout);
            ui->scanInfo->append(ip + " [" + QString::number(port) + "] " + (b ? "open" : "close"));
            QCoreApplication::processEvents();
            qDebug() << ip + " [" + QString::number(port) + "] " + (b ? "open" : "close");

        }
    }
}

void MainWindow::on_btnStartScan_clicked()
{
    ui->scanInfo->clear();
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
    ui->scanInfo->append(QString::number(ipList->size()) + " IP addresses to scan...");
    ui->scanInfo->append("From "+ipList->first() + " to " + ipList->last());
    scan(ipList, (uint16_t)ui->startPort->value(), (uint16_t)ui->endPort->value(), 1000);
    delete ipList;
}