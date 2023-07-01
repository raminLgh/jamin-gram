/********************************************************************************
** Form generated from reading UI file 'main_login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_LOGIN_H
#define UI_MAIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_login
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *username2;
    QLineEdit *lineEdit_5;
    QLineEdit *pasword2;
    QCheckBox *checkBoxp;
    QPushButton *verifypb;
    QPushButton *verifypb_2;
    QLineEdit *lineEdit_7;

    void setupUi(QMainWindow *main_login)
    {
        if (main_login->objectName().isEmpty())
            main_login->setObjectName(QString::fromUtf8("main_login"));
        main_login->resize(750, 480);
        main_login->setMinimumSize(QSize(750, 480));
        main_login->setMaximumSize(QSize(750, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/Screenshot (7).png"), QSize(), QIcon::Normal, QIcon::Off);
        main_login->setWindowIcon(icon);
        main_login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(main_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 40, 400, 400));
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (7).png);"));
        textEdit_2->setReadOnly(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(515, 35, 65, 65));
        lineEdit->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/adamak.jpg);"));
        lineEdit->setReadOnly(true);
        username2 = new QLineEdit(centralwidget);
        username2->setObjectName(QString::fromUtf8("username2"));
        username2->setGeometry(QRect(453, 150, 190, 30));
        username2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QLineEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}"));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(420, 220, 28, 28));
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (27).png);"));
        lineEdit_5->setReadOnly(true);
        pasword2 = new QLineEdit(centralwidget);
        pasword2->setObjectName(QString::fromUtf8("pasword2"));
        pasword2->setGeometry(QRect(453, 218, 190, 30));
        pasword2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QLineEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}"));
        pasword2->setEchoMode(QLineEdit::Password);
        checkBoxp = new QCheckBox(centralwidget);
        checkBoxp->setObjectName(QString::fromUtf8("checkBoxp"));
        checkBoxp->setGeometry(QRect(660, 224, 70, 17));
        QFont font;
        font.setPointSize(9);
        checkBoxp->setFont(font);
        verifypb = new QPushButton(centralwidget);
        verifypb->setObjectName(QString::fromUtf8("verifypb"));
        verifypb->setGeometry(QRect(500, 360, 100, 32));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        verifypb->setFont(font1);
        verifypb->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 156, 234);\n"
"border-radius:10px;"));
        verifypb_2 = new QPushButton(centralwidget);
        verifypb_2->setObjectName(QString::fromUtf8("verifypb_2"));
        verifypb_2->setGeometry(QRect(455, 290, 180, 32));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(true);
        verifypb_2->setFont(font2);
        verifypb_2->setCursor(QCursor(Qt::PointingHandCursor));
        verifypb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(5, 147, 255);"));
        verifypb_2->setFlat(true);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(420, 152, 28, 28));
        lineEdit_7->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (12).png);"));
        lineEdit_7->setReadOnly(true);
        main_login->setCentralWidget(centralwidget);

        retranslateUi(main_login);

        QMetaObject::connectSlotsByName(main_login);
    } // setupUi

    void retranslateUi(QMainWindow *main_login)
    {
        main_login->setWindowTitle(QCoreApplication::translate("main_login", "log in", nullptr));
#if QT_CONFIG(tooltip)
        username2->setToolTip(QCoreApplication::translate("main_login", "<html><head/><body><p>User name</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        username2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        username2->setPlaceholderText(QCoreApplication::translate("main_login", " User name", nullptr));
#if QT_CONFIG(tooltip)
        pasword2->setToolTip(QCoreApplication::translate("main_login", "<html><head/><body><p> Pasword</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pasword2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pasword2->setPlaceholderText(QCoreApplication::translate("main_login", " Pasword", nullptr));
        checkBoxp->setText(QCoreApplication::translate("main_login", "show", nullptr));
        verifypb->setText(QCoreApplication::translate("main_login", "log in", nullptr));
        verifypb_2->setText(QCoreApplication::translate("main_login", "forgot password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_login: public Ui_main_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_LOGIN_H
