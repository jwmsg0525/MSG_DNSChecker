/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *E_domain;
    QLabel *label;
    QLineEdit *E_dns1;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *E_dns2;
    QPushButton *Btn_start;
    QPushButton *Btn_stop;
    QLineEdit *LOG_Location;
    QLabel *label_4;
    QLineEdit *E_timesec;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(320, 325);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        E_domain = new QLineEdit(centralWidget);
        E_domain->setObjectName(QString::fromUtf8("E_domain"));
        E_domain->setGeometry(QRect(80, 20, 231, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 67, 17));
        E_dns1 = new QLineEdit(centralWidget);
        E_dns1->setObjectName(QString::fromUtf8("E_dns1"));
        E_dns1->setGeometry(QRect(80, 60, 231, 25));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 67, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 67, 17));
        E_dns2 = new QLineEdit(centralWidget);
        E_dns2->setObjectName(QString::fromUtf8("E_dns2"));
        E_dns2->setGeometry(QRect(80, 100, 231, 25));
        Btn_start = new QPushButton(centralWidget);
        Btn_start->setObjectName(QString::fromUtf8("Btn_start"));
        Btn_start->setGeometry(QRect(220, 170, 89, 25));
        Btn_stop = new QPushButton(centralWidget);
        Btn_stop->setObjectName(QString::fromUtf8("Btn_stop"));
        Btn_stop->setEnabled(false);
        Btn_stop->setGeometry(QRect(220, 200, 89, 25));
        LOG_Location = new QLineEdit(centralWidget);
        LOG_Location->setObjectName(QString::fromUtf8("LOG_Location"));
        LOG_Location->setGeometry(QRect(80, 140, 231, 25));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 140, 67, 17));
        E_timesec = new QLineEdit(centralWidget);
        E_timesec->setObjectName(QString::fromUtf8("E_timesec"));
        E_timesec->setGeometry(QRect(80, 170, 91, 25));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 170, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 320, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setMouseTracking(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DNS Checker", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Domain", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "DNS1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "DNS2", 0, QApplication::UnicodeUTF8));
        Btn_start->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        Btn_stop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "LOG", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "TimeSec", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        statusBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        statusBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        statusBar->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        statusBar->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
