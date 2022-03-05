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
    QWidget *layoutWidget;
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
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QSpinBox *threadNum;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *startPort;
    QLabel *label_10;
    QSpinBox *endPort;
    QTextBrowser *openPortInfo;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QSpinBox *timeout;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *labelComplete;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1028, 745);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnStartScan = new QPushButton(centralWidget);
        btnStartScan->setObjectName(QStringLiteral("btnStartScan"));
        btnStartScan->setGeometry(QRect(520, 180, 191, 51));
        QFont font;
        font.setPointSize(18);
        btnStartScan->setFont(font);
        btnStopScan = new QPushButton(centralWidget);
        btnStopScan->setObjectName(QStringLiteral("btnStopScan"));
        btnStopScan->setGeometry(QRect(750, 180, 211, 51));
        btnStopScan->setFont(font);
        scanInfo = new QTextBrowser(centralWidget);
        scanInfo->setObjectName(QStringLiteral("scanInfo"));
        scanInfo->setGeometry(QRect(50, 290, 661, 371));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 34, 911, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        startIP1 = new QSpinBox(layoutWidget);
        startIP1->setObjectName(QStringLiteral("startIP1"));
        QFont font2;
        font2.setPointSize(16);
        startIP1->setFont(font2);
        startIP1->setMaximum(255);
        startIP1->setValue(47);

        horizontalLayout->addWidget(startIP1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu Condensed"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);

        horizontalLayout->addWidget(label_3);

        startIP2 = new QSpinBox(layoutWidget);
        startIP2->setObjectName(QStringLiteral("startIP2"));
        startIP2->setFont(font2);
        startIP2->setMaximum(255);
        startIP2->setValue(110);

        horizontalLayout->addWidget(startIP2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);

        horizontalLayout->addWidget(label_4);

        startIP3 = new QSpinBox(layoutWidget);
        startIP3->setObjectName(QStringLiteral("startIP3"));
        startIP3->setFont(font2);
        startIP3->setMaximum(255);
        startIP3->setValue(136);

        horizontalLayout->addWidget(startIP3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        horizontalLayout->addWidget(label_5);

        startIP4 = new QSpinBox(layoutWidget);
        startIP4->setObjectName(QStringLiteral("startIP4"));
        startIP4->setFont(font2);
        startIP4->setMaximum(255);
        startIP4->setValue(219);

        horizontalLayout->addWidget(startIP4);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);

        horizontalLayout->addWidget(label_9);

        endIP1 = new QSpinBox(layoutWidget);
        endIP1->setObjectName(QStringLiteral("endIP1"));
        endIP1->setFont(font2);
        endIP1->setMaximum(255);
        endIP1->setValue(47);

        horizontalLayout->addWidget(endIP1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);

        horizontalLayout->addWidget(label_7);

        endIP2 = new QSpinBox(layoutWidget);
        endIP2->setObjectName(QStringLiteral("endIP2"));
        endIP2->setFont(font2);
        endIP2->setMaximum(255);
        endIP2->setValue(110);

        horizontalLayout->addWidget(endIP2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);

        horizontalLayout->addWidget(label_8);

        endIP3 = new QSpinBox(layoutWidget);
        endIP3->setObjectName(QStringLiteral("endIP3"));
        endIP3->setFont(font2);
        endIP3->setMaximum(255);
        endIP3->setValue(136);

        horizontalLayout->addWidget(endIP3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);

        horizontalLayout->addWidget(label_6);

        endIP4 = new QSpinBox(layoutWidget);
        endIP4->setObjectName(QStringLiteral("endIP4"));
        endIP4->setFont(font2);
        endIP4->setMaximum(255);
        endIP4->setValue(219);

        horizontalLayout->addWidget(endIP4);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 180, 391, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_3->addWidget(label_11);

        threadNum = new QSpinBox(layoutWidget1);
        threadNum->setObjectName(QStringLiteral("threadNum"));
        threadNum->setFont(font2);
        threadNum->setMinimum(1);
        threadNum->setMaximum(10);

        horizontalLayout_3->addWidget(threadNum);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 110, 411, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        startPort = new QSpinBox(layoutWidget2);
        startPort->setObjectName(QStringLiteral("startPort"));
        startPort->setFont(font2);
        startPort->setMaximum(65535);
        startPort->setValue(80);

        horizontalLayout_2->addWidget(startPort);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_2->addWidget(label_10);

        endPort = new QSpinBox(layoutWidget2);
        endPort->setObjectName(QStringLiteral("endPort"));
        endPort->setFont(font2);
        endPort->setMaximum(65535);
        endPort->setValue(80);

        horizontalLayout_2->addWidget(endPort);

        openPortInfo = new QTextBrowser(centralWidget);
        openPortInfo->setObjectName(QStringLiteral("openPortInfo"));
        openPortInfo->setGeometry(QRect(740, 290, 231, 371));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(550, 110, 351, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        horizontalLayout_4->addWidget(label_12);

        timeout = new QSpinBox(layoutWidget3);
        timeout->setObjectName(QStringLiteral("timeout"));
        timeout->setFont(font2);
        timeout->setMinimum(1);
        timeout->setMaximum(10000);
        timeout->setValue(500);

        horizontalLayout_4->addWidget(timeout);

        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        horizontalLayout_4->addWidget(label_13);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(70, 250, 285, 39));
        label_14->setFont(font1);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(750, 250, 151, 39));
        label_15->setFont(font1);
        labelComplete = new QLabel(centralWidget);
        labelComplete->setObjectName(QStringLiteral("labelComplete"));
        labelComplete->setGeometry(QRect(350, 250, 191, 31));
        QFont font4;
        font4.setPointSize(14);
        labelComplete->setFont(font4);
        labelComplete->setTextFormat(Qt::PlainText);
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
        label_12->setText(QApplication::translate("MainWindow", "Timeout:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", " (ms)", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Scanning Info :", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "open port :", Q_NULLPTR));
        labelComplete->setText(QApplication::translate("MainWindow", "Scanning complete!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
