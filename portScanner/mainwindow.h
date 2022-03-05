#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnStartScan_clicked();

private:
    Ui::MainWindow *ui;
    bool testPort(QTcpSocket * socket_, char* ip, uint16_t port, int timeout);
    QStringList* getIPList();
    void scan(QStringList* ipList, uint16_t startPort, uint16_t endPort, int timeout);
};

#endif // MAINWINDOW_H
