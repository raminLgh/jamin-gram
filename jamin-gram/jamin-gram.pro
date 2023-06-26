QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    channel.cpp \
    concatenate_string.cpp \
    forget.cpp \
    groups.cpp \
    main.cpp \
    first_page.cpp \
    main_login.cpp \
    main_singup.cpp \
    signup1.cpp \
    signup2.cpp \
    signup3.cpp \
    signup4.cpp

HEADERS += \
    channel.h \
    concatenate_string.h \
    first_page.h \
    forget.h \
    groups.h \
    main_login.h \
    main_singup.h \
    signup1.h \
    signup2.h \
    signup3.h \
    signup4.h

FORMS += \
    channel.ui \
    first_page.ui \
    forget.ui \
    groups.ui \
    main_login.ui \
    main_singup.ui \
    signup1.ui \
    signup2.ui \
    signup3.ui \
    signup4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    aks.qrc
