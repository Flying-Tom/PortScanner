#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTcpSocket>
#include <QThread>
#include <mythread.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void dealDone();   //线程槽函数
    void stopThread();  //停止线程

private slots:
    void on_btnStartScan_clicked();

    void on_btnStopScan_clicked();

    void updateUI(QString *ip, int port, bool isOpen);

    void threadFinish(MyThread *p);

    void on_btnCopyIP_clicked();

private:
    Ui::MainWindow *ui;
    bool testPort(QTcpSocket * socket_, char* ip, uint16_t port, int timeout);
    QStringList* getIPList();
    void scan(QStringList* ipList, uint16_t startPort, uint16_t endPort, int timeout);
    MyThread* threadArray[10];
    int cnt;
};

#endif // MAINWINDOW_H
