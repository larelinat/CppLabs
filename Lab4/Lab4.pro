QT += core
QT -= gui

CONFIG += c++11

TARGET = Lab4
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    transport.cpp \
    lghtcar.cpp

HEADERS += \
    transport.h \
    lghtcar.h
