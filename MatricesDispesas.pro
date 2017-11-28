QT += core
QT -= gui

CONFIG += c++11

TARGET = MatricesDispesas
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    csc.cpp

HEADERS += \
    csc.h
