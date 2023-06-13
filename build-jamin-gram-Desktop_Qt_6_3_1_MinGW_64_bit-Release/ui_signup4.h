/********************************************************************************
** Form generated from reading UI file 'signup4.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP4_H
#define UI_SIGNUP4_H

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

class Ui_signup4
{
public:
    QWidget *centralwidget;
    QPushButton *previous;
    QTextEdit *textEdit_2;
    QPushButton *nextpb;
    QProgressBar *progressBar;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signup4)
    {
        if (signup4->objectName().isEmpty())
            signup4->setObjectName(QString::fromUtf8("signup4"));
        signup4->resize(400, 600);
        signup4->setMinimumSize(QSize(400, 600));
        signup4->setMaximumSize(QSize(400, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/IMG_20230604_093749_170.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        signup4->setWindowIcon(icon);
        signup4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(signup4);
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
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(40, 270, 320, 150));
        QFont font1;
        font1.setPointSize(8);
        textEdit_2->setFont(font1);
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
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
        progressBar->setValue(100);
        progressBar->setTextVisible(true);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 20, 220, 220));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/IMG_20230604_093749_170.jpg);"));
        textEdit->setReadOnly(true);
        signup4->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signup4);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 26));
        signup4->setMenuBar(menubar);
        statusbar = new QStatusBar(signup4);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        signup4->setStatusBar(statusbar);

        retranslateUi(signup4);

        nextpb->setDefault(true);


        QMetaObject::connectSlotsByName(signup4);
    } // setupUi

    void retranslateUi(QMainWindow *signup4)
    {
        signup4->setWindowTitle(QCoreApplication::translate("signup4", "Powerfull", nullptr));
        previous->setText(QCoreApplication::translate("signup4", "previous", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("signup4", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; color:#ff0000;\">POWER</span><span style=\" font-size:16pt; font-weight:700; color:#ffaa00;\">FULL</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#aa00ff;\">jamin</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#643296;\">gram</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">has no limits on the </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">size of your media</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">and chats</span></p></body></html>", nullptr));
        nextpb->setText(QCoreApplication::translate("signup4", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup4: public Ui_signup4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP4_H
