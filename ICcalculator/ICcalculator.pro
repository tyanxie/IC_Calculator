#-------------------------------------------------
#
# Project created by QtCreator 2019-07-13T17:18:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ICcalculator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        ICcalculator.cpp \
    science.cpp \
    plural.cpp \
    complex.cpp \
    clock.cpp \
    date.cpp \
    equation.cpp \
    matrix.cpp \
    matrix_bottom.cpp \
    calculator_for_programmer.cpp \
    programmer.cpp \
    relationship.cpp \
    relatives.cpp

HEADERS += \
        ICcalculator.h \
    science.h \
    plural.h \
    complex.h \
    clock.h \
    date.h \
    equation.h \
    matrix.h \
    matrix_bottom.h \
    calculator_for_programmer.h \
    programmer.h \
    relationship.h \
    relatives.h

FORMS += \
        ICcalculator.ui \
    science.ui \
    complex.ui \
    date.ui \
    equation.ui \
    matrix.ui \
    programmer.ui \
    relationship.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

RC_ICONS = mainIco.ico
