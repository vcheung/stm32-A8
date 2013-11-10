#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    struct PortSettings myComSettings = {BAUD115200,DATA_8,PAR_NONE,STOP_1,FLOW_OFF};
    myCom = new Win_QextSerialPort("com2",myComSettings,QextSerialBase::EventDriven);
    myCom->open(QIODevice::ReadWrite);
    connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readMyCom()
{
    QByteArray temp = myCom->readAll();
    ui->textBrowser->insertPlainText(temp);
}

void MainWindow::on_LED1Btn_clicked()
{
    char temp[2]={0};
    myCom->write(temp,1);
    qDebug()<<"LED1";
}

void MainWindow::on_LED2Btn_clicked()
{
    char temp[2]={1};
    myCom->write(temp,1);
    qDebug()<<"LED2";
}

void MainWindow::on_LED3Btn_clicked()
{
    char temp[2]={2};
    myCom->write(temp,1);
    qDebug()<<"LED3";
}


void MainWindow::on_LED4Btn_clicked()
{
    char temp[2]={3};
    myCom->write(temp,1);
    qDebug()<<"LED4";
}
