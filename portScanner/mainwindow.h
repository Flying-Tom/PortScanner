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
};

#endif // MAINWINDOW_H
