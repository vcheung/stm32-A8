#-------------------------------------------------
#
# Project created by QtCreator 2013-11-09T15:00:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = A8_USART
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    win_qextserialport.cpp \
    qextserialbase.cpp

HEADERS  += mainwindow.h \
    win_qextserialport.h \
    qextserialbase.h

FORMS    += mainwindow.ui
