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
    qextserialbase.cpp \
    posix_qextserialport.cpp

HEADERS  += mainwindow.h \
    qextserialbase.h \
    posix_qextserialport.h

FORMS    += mainwindow.ui
