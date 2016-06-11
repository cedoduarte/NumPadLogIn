#-------------------------------------------------
#
# Project created by QtCreator 2016-06-10T20:38:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NumPadLogIn
TEMPLATE = app


SOURCES += main.cpp\
        NumPadLogInDialog.cpp \
    MainForm.cpp \
    DuNumericPushButton.cpp

HEADERS  += NumPadLogInDialog.h \
    MainForm.h \
    DuNumericPushButton.h

FORMS    += NumPadLogInDialog.ui \
    MainForm.ui

QMAKE_CXXFLAGS += -std=gnu++14
