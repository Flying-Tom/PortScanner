/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnStartScan;
    QPushButton *btnStopScan;
    QTextBrowser *scanInfo;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *startIP1;
    QLabel *label_3;
    QSpinBox *startIP2;
    QLabel *label_4;
    QSpinBox *startIP3;
    QLabel *label_5;
    QSpinBox *startIP4;
    QLabel *label_9;
    QSpinBox *endIP1;
    QLabel *label_7;
    QSpinBox *endIP2;
    QLabel *label_8;
    QSpinBox *endIP3;
    QLabel *label_6;
    QSpinBox *endIP4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QSpinBox *threadNum;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *startPort;
    QLabel *label_10;
    QSpinBox *endPort;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1028, 607);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnStartScan = new QPushButton(centralWidget);
        btnStartScan->setObjectName(QStringLiteral("btnStartScan"));
        btnStartScan->setGeometry(QRect(201, 181, 191, 51));
        QFont font;
        font.setPointSize(18);
        btnStartScan->setFont(font);
        btnStopScan = new QPushButton(centralWidget);
        btnStopScan->setObjectName(QStringLiteral("btnStopScan"));
        btnStopScan->setGeometry(QRect(609, 181, 191, 51));
        btnStopScan->setFont(font);
        scanInfo = new QTextBrowser(centralWidget);
        scanInfo->setObjectName(QStringLiteral("scanInfo"));
        scanInfo->setGeometry(QRect(50, 260, 921, 271));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 34, 911, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        startIP1 = new QSpinBox(widget);
        startIP1->setObjectName(QStringLiteral("startIP1"));
        QFont font2;
        font2.setPointSize(16);
        startIP1->setFont(font2);
        startIP1->setMaximum(255);
        startIP1->setValue(192);

        horizontalLayout->addWidget(startIP1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu Condensed"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);

        horizontalLayout->addWidget(label_3);

        startIP2 = new QSpinBox(widget);
        startIP2->setObjectName(QStringLiteral("startIP2"));
        startIP2->setFont(font2);
        startIP2->setMaximum(255);
        startIP2->setValue(168);

        horizontalLayout->addWidget(startIP2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);

        horizontalLayout->addWidget(label_4);

        startIP3 = new QSpinBox(widget);
        startIP3->setObjectName(QStringLiteral("startIP3"));
        startIP3->setFont(font2);
        startIP3->setMaximum(255);
        startIP3->setValue(1);

        horizontalLayout->addWidget(startIP3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        horizontalLayout->addWidget(label_5);

        startIP4 = new QSpinBox(widget);
        startIP4->setObjectName(QStringLiteral("startIP4"));
        startIP4->setFont(font2);
        startIP4->setMaximum(255);
        startIP4->setValue(1);

        horizontalLayout->addWidget(startIP4);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);

        horizontalLayout->addWidget(label_9);

        endIP1 = new QSpinBox(widget);
        endIP1->setObjectName(QStringLiteral("endIP1"));
        endIP1->setFont(font2);
        endIP1->setMaximum(255);
        endIP1->setValue(192);

        horizontalLayout->addWidget(endIP1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);

        horizontalLayout->addWidget(label_7);

        endIP2 = new QSpinBox(widget);
        endIP2->setObjectName(QStringLiteral("endIP2"));
        endIP2->setFont(font2);
        endIP2->setMaximum(255);
        endIP2->setValue(168);

        horizontalLayout->addWidget(endIP2);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);

        horizontalLayout->addWidget(label_8);

        endIP3 = new QSpinBox(widget);
        endIP3->setObjectName(QStringLiteral("endIP3"));
        endIP3->setFont(font2);
        endIP3->setMaximum(255);
        endIP3->setValue(1);

        horizontalLayout->addWidget(endIP3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);

        horizontalLayout->addWidget(label_6);

        endIP4 = new QSpinBox(widget);
        endIP4->setObjectName(QStringLiteral("endIP4"));
        endIP4->setFont(font2);
        endIP4->setMaximum(255);
        endIP4->setValue(1);

        horizontalLayout->addWidget(endIP4);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(570, 110, 391, 41));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_3->addWidget(label_11);

        threadNum = new QSpinBox(widget1);
        threadNum->setObjectName(QStringLiteral("threadNum"));
        threadNum->setFont(font2);
        threadNum->setMinimum(1);
        threadNum->setMaximum(10);

        horizontalLayout_3->addWidget(threadNum);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(50, 110, 411, 41));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        startPort = new QSpinBox(widget2);
        startPort->setObjectName(QStringLiteral("startPort"));
        startPort->setFont(font2);
        startPort->setMaximum(65535);
        startPort->setValue(80);

        horizontalLayout_2->addWidget(startPort);

        label_10 = new QLabel(widget2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_2->addWidget(label_10);

        endPort = new QSpinBox(widget2);
        endPort->setObjectName(QStringLiteral("endPort"));
        endPort->setFont(font2);
        endPort->setMaximum(65535);
        endPort->setValue(80);

        horizontalLayout_2->addWidget(endPort);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1028, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btnStartScan->setText(QApplication::translate("MainWindow", "Start scanning", Q_NULLPTR));
        btnStopScan->setText(QApplication::translate("MainWindow", "Stop scanning", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Range of IP :  ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", " ~ ", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Thread number(1-10) :  ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Range of Port :  ", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
