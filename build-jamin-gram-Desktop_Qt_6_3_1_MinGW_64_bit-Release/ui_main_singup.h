/********************************************************************************
** Form generated from reading UI file 'main_singup.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_SINGUP_H
#define UI_MAIN_SINGUP_H

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

class Ui_main_singup
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLineEdit *firstname;
    QLineEdit *lineEdit_3;
    QLineEdit *lastname;
    QLineEdit *lineEdit_2;
    QLineEdit *phone;
    QLineEdit *lineEdit_4;
    QLineEdit *Email;
    QLineEdit *username;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_5;
    QLineEdit *pasword;
    QLineEdit *lineEdit_6;
    QLineEdit *repasword;
    QPushButton *verifypb;
    QTextEdit *textEdit_2;
    QCheckBox *checkBoxp;
    QCheckBox *checkBoxrp;

    void setupUi(QMainWindow *main_singup)
    {
        if (main_singup->objectName().isEmpty())
            main_singup->setObjectName(QString::fromUtf8("main_singup"));
        main_singup->resize(730, 423);
        main_singup->setMinimumSize(QSize(730, 423));
        main_singup->setMaximumSize(QSize(730, 423));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/customer community.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_singup->setWindowIcon(icon);
        main_singup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(main_singup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 360, 423));
        textEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/customer community.png);"));
        textEdit->setReadOnly(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(380, 90, 27, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (12).png);"));
        lineEdit->setReadOnly(true);
        firstname = new QLineEdit(centralwidget);
        firstname->setObjectName(QString::fromUtf8("firstname"));
        firstname->setGeometry(QRect(413, 90, 120, 26));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(560, 90, 27, 26));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (12).png);"));
        lineEdit_3->setReadOnly(true);
        lastname = new QLineEdit(centralwidget);
        lastname->setObjectName(QString::fromUtf8("lastname"));
        lastname->setGeometry(QRect(593, 90, 120, 26));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(380, 220, 27, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (22).png);"));
        lineEdit_2->setReadOnly(true);
        phone = new QLineEdit(centralwidget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(413, 220, 190, 26));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(380, 175, 27, 26));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (23).png);"));
        lineEdit_4->setReadOnly(true);
        Email = new QLineEdit(centralwidget);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(413, 176, 190, 26));
        username = new QLineEdit(centralwidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(413, 133, 190, 26));
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(380, 134, 27, 26));
        lineEdit_7->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (12).png);"));
        lineEdit_7->setReadOnly(true);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(380, 262, 27, 26));
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (27).png);"));
        lineEdit_5->setReadOnly(true);
        pasword = new QLineEdit(centralwidget);
        pasword->setObjectName(QString::fromUtf8("pasword"));
        pasword->setGeometry(QRect(413, 264, 190, 26));
        pasword->setEchoMode(QLineEdit::Password);
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(380, 310, 27, 26));
        lineEdit_6->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (27).png);"));
        lineEdit_6->setReadOnly(true);
        repasword = new QLineEdit(centralwidget);
        repasword->setObjectName(QString::fromUtf8("repasword"));
        repasword->setGeometry(QRect(413, 310, 190, 26));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        repasword->setFont(font);
        repasword->setEchoMode(QLineEdit::Password);
        verifypb = new QPushButton(centralwidget);
        verifypb->setObjectName(QString::fromUtf8("verifypb"));
        verifypb->setGeometry(QRect(500, 360, 95, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        verifypb->setFont(font1);
        verifypb->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 156, 234);"));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(428, 18, 221, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Narrow")});
        font2.setPointSize(10);
        textEdit_2->setFont(font2);
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        checkBoxp = new QCheckBox(centralwidget);
        checkBoxp->setObjectName(QString::fromUtf8("checkBoxp"));
        checkBoxp->setGeometry(QRect(620, 270, 70, 17));
        QFont font3;
        font3.setPointSize(9);
        checkBoxp->setFont(font3);
        checkBoxrp = new QCheckBox(centralwidget);
        checkBoxrp->setObjectName(QString::fromUtf8("checkBoxrp"));
        checkBoxrp->setGeometry(QRect(620, 314, 70, 17));
        checkBoxrp->setFont(font3);
        main_singup->setCentralWidget(centralwidget);

        retranslateUi(main_singup);

        QMetaObject::connectSlotsByName(main_singup);
    } // setupUi

    void retranslateUi(QMainWindow *main_singup)
    {
        main_singup->setWindowTitle(QCoreApplication::translate("main_singup", "sign up", nullptr));
#if QT_CONFIG(tooltip)
        firstname->setToolTip(QCoreApplication::translate("main_singup", "<html><head/><body><p>First name</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        firstname->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        firstname->setPlaceholderText(QCoreApplication::translate("main_singup", " First name", nullptr));
#if QT_CONFIG(tooltip)
        lastname->setToolTip(QCoreApplication::translate("main_singup", "<html><head/><body><p>Last name</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        lastname->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        lastname->setText(QString());
        lastname->setPlaceholderText(QCoreApplication::translate("main_singup", " Last name", nullptr));
#if QT_CONFIG(tooltip)
        phone->setToolTip(QCoreApplication::translate("main_singup", "<html><head/><body><p>Phone</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        phone->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        phone->setPlaceholderText(QCoreApplication::translate("main_singup", " Phone", nullptr));
#if QT_CONFIG(tooltip)
        Email->setToolTip(QCoreApplication::translate("main_singup", "<html><head/><body><p> Email</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Email->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        Email->setPlaceholderText(QCoreApplication::translate("main_singup", " Email", nullptr));
#if QT_CONFIG(tooltip)
        username->setToolTip(QCoreApplication::translate("main_singup", "<html><head/><body><p>User name</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        username->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        username->setPlaceholderText(QCoreApplication::translate("main_singup", " User name", nullptr));
#if QT_CONFIG(tooltip)
        pasword->setToolTip(QCoreApplication::translate("main_singup", "<html><head/><body><p> Pasword</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pasword->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pasword->setPlaceholderText(QCoreApplication::translate("main_singup", " Pasword", nullptr));
#if QT_CONFIG(tooltip)
        repasword->setToolTip(QCoreApplication::translate("main_singup", "<html><head/><body><p>pasword</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        repasword->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        repasword->setPlaceholderText(QCoreApplication::translate("main_singup", " retype pasword", nullptr));
        verifypb->setText(QCoreApplication::translate("main_singup", "verify", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("main_singup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial Narrow'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; color:#aa00ff;\">sign</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt;\"> up </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; color:#0055ff;\">form</span></p></body></html>", nullptr));
        checkBoxp->setText(QCoreApplication::translate("main_singup", "show", nullptr));
        checkBoxrp->setText(QCoreApplication::translate("main_singup", "show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_singup: public Ui_main_singup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SINGUP_H
