/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Nov 12 10:43:21 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *LED1Btn;
    QPushButton *LED2Btn;
    QPushButton *LED3Btn;
    QPushButton *LED4Btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 600, 200));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 250, 481, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LED1Btn = new QPushButton(layoutWidget);
        LED1Btn->setObjectName(QString::fromUtf8("LED1Btn"));
        LED1Btn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(LED1Btn);

        LED2Btn = new QPushButton(layoutWidget);
        LED2Btn->setObjectName(QString::fromUtf8("LED2Btn"));
        LED2Btn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(LED2Btn);

        LED3Btn = new QPushButton(layoutWidget);
        LED3Btn->setObjectName(QString::fromUtf8("LED3Btn"));
        LED3Btn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(LED3Btn);

        LED4Btn = new QPushButton(layoutWidget);
        LED4Btn->setObjectName(QString::fromUtf8("LED4Btn"));
        LED4Btn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(LED4Btn);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        LED1Btn->setText(QApplication::translate("MainWindow", "LED1", 0, QApplication::UnicodeUTF8));
        LED2Btn->setText(QApplication::translate("MainWindow", "LED2", 0, QApplication::UnicodeUTF8));
        LED3Btn->setText(QApplication::translate("MainWindow", "LED3", 0, QApplication::UnicodeUTF8));
        LED4Btn->setText(QApplication::translate("MainWindow", "LED4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
