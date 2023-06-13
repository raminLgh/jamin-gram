/********************************************************************************
** Form generated from reading UI file 'signup1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP1_H
#define UI_SIGNUP1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup1
{
public:
    QWidget *centralwidget;
    QPushButton *previous;
    QPushButton *nextpb;
    QProgressBar *progressBar;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signup1)
    {
        if (signup1->objectName().isEmpty())
            signup1->setObjectName(QString::fromUtf8("signup1"));
        signup1->resize(400, 600);
        signup1->setMinimumSize(QSize(400, 600));
        signup1->setMaximumSize(QSize(400, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/IMG_20230604_093748_506.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        signup1->setWindowIcon(icon);
        signup1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(signup1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        previous = new QPushButton(centralwidget);
        previous->setObjectName(QString::fromUtf8("previous"));
        previous->setGeometry(QRect(80, 440, 80, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(13);
        font.setBold(true);
        previous->setFont(font);
        previous->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);"));
        nextpb = new QPushButton(centralwidget);
        nextpb->setObjectName(QString::fromUtf8("nextpb"));
        nextpb->setGeometry(QRect(240, 440, 80, 32));
        nextpb->setFont(font);
        nextpb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        nextpb->setAutoDefault(false);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(80, 510, 275, 25));
        progressBar->setMinimum(0);
        progressBar->setValue(25);
        progressBar->setTextVisible(true);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(40, 270, 320, 150));
        QFont font1;
        font1.setPointSize(8);
        textEdit_2->setFont(font1);
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 20, 220, 220));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/IMG_20230604_093748_506.jpg);"));
        textEdit->setReadOnly(true);
        signup1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signup1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 26));
        signup1->setMenuBar(menubar);
        statusbar = new QStatusBar(signup1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        signup1->setStatusBar(statusbar);

        retranslateUi(signup1);

        nextpb->setDefault(true);


        QMetaObject::connectSlotsByName(signup1);
    } // setupUi

    void retranslateUi(QMainWindow *signup1)
    {
        signup1->setWindowTitle(QCoreApplication::translate("signup1", "Fast", nullptr));
        previous->setText(QCoreApplication::translate("signup1", "previous", nullptr));
        nextpb->setText(QCoreApplication::translate("signup1", "next", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("signup1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:700; color:#ff0000;\">FA</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:700; color:#f69900;\">ST</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; marg"
                        "in-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#aa00ff;\">jamin</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#643296;\">gram</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">deliver message</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">faster than any other </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">application</span><span style=\""
                        " font-family:'MS Shell Dlg 2'; font-size:10pt;\"> </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup1: public Ui_signup1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP1_H
