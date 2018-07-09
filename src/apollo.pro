#-------------------------------------------------
#
# Project created by QtCreator 2018-07-03T21:42:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport sql

TARGET = apollo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
QMAKE_CXXFLAGS += -v

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    dataseries.cpp \
    indicatorcombobox.cpp \
    interactivechart.cpp \
    listitem.cpp \
    mainwindow.cpp \
    pfdecompositioncheckbox.cpp \
    plotlist.cpp \
    portfoliocombobox.cpp \
    publisher.cpp \
    repository.cpp \
    searchbox.cpp \
    subscriber.cpp \
    ticker.cpp \
    timeframecombobox.cpp \
    lib/qcustomplot.cpp \
    gateway.cpp \
    datafactory.cpp \
    imodeldata.cpp

HEADERS += \
    dataseries.h \
    indicatorcombobox.h \
    interactivechart.h \
    listitem.h \
    mainwindow.h \
    pfdecompositioncheckbox.h \
    plotlist.h \
    portfoliocombobox.h \
    publisher.h \
    repository.h \
    searchbox.h \
    subscriber.h \
    ticker.h \
    timeframecombobox.h \
    lib/qcustomplot.h \
    gateway.h \
    datafactory.h \
    imodeldata.h

FORMS += \
        mainwindow.ui
