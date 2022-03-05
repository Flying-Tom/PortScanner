#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QTcpSocket>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread(QString* ip, QList<int>* ports, int timeout);
    ~MyThread();
private:
    int timeout;
    QString* ip;
    QList<int>* ports;

    bool testConnection(QString ip, uint16_t port, int timeout);

protected:
    void run();

signals:
    void done(QString *ip, int port, bool isOpen);
};

#endif // MYTHREAD_H
