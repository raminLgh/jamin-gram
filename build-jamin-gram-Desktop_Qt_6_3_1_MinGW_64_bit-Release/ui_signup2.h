/********************************************************************************
** Form generated from reading UI file 'signup2.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP2_H
#define UI_SIGNUP2_H

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

class Ui_signup2
{
public:
    QWidget *centralwidget;
    QPushButton *nextpb;
    QTextEdit *textEdit;
    QPushButton *previous;
    QProgressBar *progressBar;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signup2)
    {
        if (signup2->objectName().isEmpty())
            signup2->setObjectName(QString::fromUtf8("signup2"));
        signup2->resize(400, 600);
        signup2->setMinimumSize(QSize(400, 600));
        signup2->setMaximumSize(QSize(400, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/IMG_20230604_093748_642.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        signup2->setWindowIcon(icon);
        signup2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(signup2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nextpb = new QPushButton(centralwidget);
        nextpb->setObjectName(QString::fromUtf8("nextpb"));
        nextpb->setGeometry(QRect(240, 440, 80, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(13);
        font.setBold(true);
        nextpb->setFont(font);
        nextpb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        nextpb->setAutoDefault(false);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 20, 220, 210));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/IMG_20230604_093748_642.jpg);"));
        textEdit->setReadOnly(true);
        previous = new QPushButton(centralwidget);
        previous->setObjectName(QString::fromUtf8("previous"));
        previous->setGeometry(QRect(80, 440, 80, 32));
        previous->setFont(font);
        previous->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(80, 510, 275, 25));
        progressBar->setMinimum(0);
        progressBar->setValue(50);
        progressBar->setTextVisible(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(40, 270, 320, 150));
        QFont font1;
        font1.setPointSize(8);
        textEdit_2->setFont(font1);
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        signup2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signup2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 26));
        signup2->setMenuBar(menubar);
        statusbar = new QStatusBar(signup2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        signup2->setStatusBar(statusbar);

        retranslateUi(signup2);

        nextpb->setDefault(true);


        QMetaObject::connectSlotsByName(signup2);
    } // setupUi

    void retranslateUi(QMainWindow *signup2)
    {
        signup2->setWindowTitle(QCoreApplication::translate("signup2", "Secure", nullptr));
        nextpb->setText(QCoreApplication::translate("signup2", "next", nullptr));
        previous->setText(QCoreApplication::translate("signup2", "previous", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("signup2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:700; color:#ff5500;\">SEC</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:700; color:#ffaa00;\">URE</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#aa00ff;\">jamin</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#643296;\">gram</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600; color:#643296;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; color:#000000;\">keeps your messages</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">safe from hacker </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">a"
                        "ttaks </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup2: public Ui_signup2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP2_H
