#-------------------------------------------------
#
# Project created by QtCreator 2014-05-21T10:54:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_Tmpl_Conversion_1
TEMPLATE = app


SOURCES += main.cpp\
        converter.cpp \
    utils/assistant.cpp \
    utils/findfiledialog.cpp \
    utils/textedit.cpp

HEADERS  += converter.h \
    include/assistant.h \
    include/findfiledialog.h \
    include/textedit.h

FORMS    += converter.ui

OTHER_FILES += \
    others/readme.txt
