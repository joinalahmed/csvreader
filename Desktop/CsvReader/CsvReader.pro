QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CsvReader
TEMPLATE = app


SOURCES += main.cpp\
        csvreader.cpp\
    home.cpp \
    quantum.cpp

HEADERS  += csvreader.h \
    home.h \
    quantum.h

FORMS    += csvreader.ui \
    home.ui \
    quantum.ui
