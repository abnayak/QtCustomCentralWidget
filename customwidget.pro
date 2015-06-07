#-------------------------------------------------
#
# Project created by QtCreator 2015-06-05T20:04:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = customwidget
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mainwindow.cpp

HEADERS  += widget.h \
    mainwindow.h

FORMS    += widget.ui \
    mainwindow.ui

RESOURCES += \
    resources.qrc
