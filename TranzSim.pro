QT += core gui widgets

TARGET = bin/TranzSim
TEMPLATE = app
CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.hpp

INCLUDEPATH += headers

# Для Linux
linux {
    QMAKE_CXXFLAGS += -Wall -Wextra -std=c++17

    INCLUDEPATH += /usr/include
}

DESTDIR = $$PWD
OBJECTS_DIR = $$PWD/build/obj
MOC_DIR = $$PWD/build/moc
RCC_DIR = $$PWD/build/rcc
UI_DIR = $$PWD/build/ui
