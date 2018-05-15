#-------------------------------------------------
#
# Project created by QtCreator 2018-04-15T15:26:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyGraphic
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    human.cpp \
    house.cpp

HEADERS  += mainwindow.h \
    line.h \
    human.h \
    house.h \
    point.h \
    rectangle.h

FORMS    += mainwindow.ui
