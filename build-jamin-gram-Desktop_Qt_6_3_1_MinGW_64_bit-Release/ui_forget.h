/********************************************************************************
** Form generated from reading UI file 'forget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_H
#define UI_FORGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_forget
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLineEdit *phone;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_7;
    QLineEdit *username;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *forget)
    {
        if (forget->objectName().isEmpty())
            forget->setObjectName(QString::fromUtf8("forget"));
        forget->resize(600, 351);
        forget->setMinimumSize(QSize(600, 351));
        forget->setMaximumSize(QSize(600, 351));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/forgot-password-concept-isolated-white_263070-194.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        forget->setWindowIcon(icon);
        forget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
""));
        centralwidget = new QWidget(forget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 331, 351));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/forgot-password-concept-isolated-white_263070-194.jpg);"));
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(385, 35, 160, 34));
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        phone = new QLineEdit(centralwidget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(380, 170, 190, 26));
        phone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QLineEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(350, 170, 27, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (22).png);"));
        lineEdit_2->setReadOnly(true);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(347, 111, 27, 26));
        lineEdit_7->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot (12).png);"));
        lineEdit_7->setReadOnly(true);
        username = new QLineEdit(centralwidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(380, 110, 190, 26));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QLineEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 220, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 78, 235);\n"
"color: rgb(255, 255, 0);\n"
"border-radius:10px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 280, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Narrow")});
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"border-radius:10px;\n"
"background-color: rgb(0, 0, 255);"));
        forget->setCentralWidget(centralwidget);

        retranslateUi(forget);

        QMetaObject::connectSlotsByName(forget);
    } // setupUi

    void retranslateUi(QMainWindow *forget)
    {
        forget->setWindowTitle(QCoreApplication::translate("forget", "forget password", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("forget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:696; color:#0055ff;\">forget</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:696;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:696; color:#aa00ff;\">page</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        phone->setToolTip(QCoreApplication::translate("forget", "<html><head/><body><p>Phone</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        phone->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        phone->setPlaceholderText(QCoreApplication::translate("forget", " Phone", nullptr));
#if QT_CONFIG(tooltip)
        username->setToolTip(QCoreApplication::translate("forget", "<html><head/><body><p>User name</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        username->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        username->setPlaceholderText(QCoreApplication::translate("forget", " User name", nullptr));
        pushButton->setText(QCoreApplication::translate("forget", "verify", nullptr));
        pushButton_2->setText(QCoreApplication::translate("forget", "back to log in page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forget: public Ui_forget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_H
