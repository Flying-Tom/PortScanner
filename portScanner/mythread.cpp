#include "mythread.h"

MyThread::MyThread(QString* ip, QList<int>* ports, int timeout){
    this->ip = new QString("");
    this->ip->append(ip);
    this->ports = new QList<int>();
    for(int i : (*ports)){
        this->ports->append(i);
    }
    this->timeout = timeout;
}

void MyThread::run()
{
    for(int port:(*ports)){
        bool b = testConnection(*(this->ip), static_cast<uint16_t>(port), this->timeout);
        qDebug() << "Subthread: " << *ip + " [" + QString::number(port) + "] " + (b ? "open" : "close");
        emit done(this->ip, port, b);
    }
}

MyThread::~MyThread(){

}

bool MyThread::testConnection(QString ip, uint16_t port, int timeout){
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
