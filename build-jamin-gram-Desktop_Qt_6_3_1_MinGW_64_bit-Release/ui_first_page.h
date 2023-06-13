/********************************************************************************
** Form generated from reading UI file 'first_page.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_PAGE_H
#define UI_FIRST_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_first_page
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QPushButton *login;
    QLabel *label_2;
    QTextEdit *textEdit_3;
    QPushButton *signup;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *first_page)
    {
        if (first_page->objectName().isEmpty())
            first_page->setObjectName(QString::fromUtf8("first_page"));
        first_page->resize(700, 560);
        first_page->setMinimumSize(QSize(700, 560));
        first_page->setMaximumSize(QSize(700, 560));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/IMG_20230612_105708_692.png"), QSize(), QIcon::Normal, QIcon::Off);
        first_page->setWindowIcon(icon);
        first_page->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 0, 103);"));
        centralwidget = new QWidget(first_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 120, 581, 311));
        QFont font;
        font.setBold(true);
        textEdit->setFont(font);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);\n"
"border-color: rgb(170, 85, 255);"));
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(280, 80, 321, 391));
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_2->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 230, 141, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Narrow")});
        font1.setPointSize(15);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        login = new QPushButton(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(130, 280, 80, 32));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Narrow")});
        font2.setPointSize(11);
        font2.setBold(true);
        login->setFont(font2);
        login->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 255);"));
        login->setIconSize(QSize(16, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 120, 91, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Narrow")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setUnderline(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(360, 170, 165, 165));
        textEdit_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/photo/image/IMG_20230612_105708_692.png);"));
        textEdit_3->setReadOnly(true);
        signup = new QPushButton(centralwidget);
        signup->setObjectName(QString::fromUtf8("signup"));
        signup->setGeometry(QRect(405, 400, 80, 32));
        signup->setFont(font2);
        signup->setStyleSheet(QString::fromUtf8("background-color: rgb(137, 69, 206);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(392, 350, 63, 30));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(138, 0, 207);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(447, 350, 61, 30));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 255);"));
        first_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(first_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 26));
        first_page->setMenuBar(menubar);
        statusbar = new QStatusBar(first_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        first_page->setStatusBar(statusbar);

        retranslateUi(first_page);

        QMetaObject::connectSlotsByName(first_page);
    } // setupUi

    void retranslateUi(QMainWindow *first_page)
    {
        first_page->setWindowTitle(QCoreApplication::translate("first_page", "jamin gram", nullptr));
        label->setText(QCoreApplication::translate("first_page", "Have an account?", nullptr));
        login->setText(QCoreApplication::translate("first_page", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("first_page", "Welcom to", nullptr));
        signup->setText(QCoreApplication::translate("first_page", "Sign up", nullptr));
        label_3->setText(QCoreApplication::translate("first_page", " jamin", nullptr));
        label_4->setText(QCoreApplication::translate("first_page", "gram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class first_page: public Ui_first_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_PAGE_H
