/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QAction *actionLOg_out;
    QAction *actionGet_chat_lists;
    QAction *actionExit;
    QAction *actionSwitch_account;
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *add_user_lineEdit;
    QListWidget *list;
    QTextEdit *chat_ted;
    QTextEdit *type_ted;
    QPushButton *grouppb;
    QPushButton *chatpb;
    QPushButton *channelpb;
    QPushButton *addpb;
    QPushButton *pushButton;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QMenu *menuOptions;

    void setupUi(QMainWindow *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(700, 600);
        chat->setMinimumSize(QSize(700, 600));
        chat->setMaximumSize(QSize(700, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/adamak.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        chat->setWindowIcon(icon);
        chat->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QLineEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}"));
        actionLOg_out = new QAction(chat);
        actionLOg_out->setObjectName(QString::fromUtf8("actionLOg_out"));
        actionGet_chat_lists = new QAction(chat);
        actionGet_chat_lists->setObjectName(QString::fromUtf8("actionGet_chat_lists"));
        actionExit = new QAction(chat);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSwitch_account = new QAction(chat);
        actionSwitch_account->setObjectName(QString::fromUtf8("actionSwitch_account"));
        centralwidget = new QWidget(chat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 512, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/adamak.jpg);"));
        add_user_lineEdit = new QLineEdit(centralwidget);
        add_user_lineEdit->setObjectName(QString::fromUtf8("add_user_lineEdit"));
        add_user_lineEdit->setGeometry(QRect(290, 512, 170, 31));
        list = new QListWidget(centralwidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(490, 60, 200, 414));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        list->setFont(font);
        list->setStyleSheet(QString::fromUtf8("border:5px solid  purple;"));
        chat_ted = new QTextEdit(centralwidget);
        chat_ted->setObjectName(QString::fromUtf8("chat_ted"));
        chat_ted->setGeometry(QRect(10, 60, 475, 370));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        chat_ted->setFont(font1);
        chat_ted->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"border-image: url(:/photo/image/Screenshot_2023-06-26-19-28-14-376-edit_org.telegram.messenger.jpg);\n"
"border-radius:8px;\n"
"}"));
        chat_ted->setReadOnly(true);
        type_ted = new QTextEdit(centralwidget);
        type_ted->setObjectName(QString::fromUtf8("type_ted"));
        type_ted->setGeometry(QRect(10, 430, 431, 44));
        type_ted->setFont(font1);
        type_ted->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:white;\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QTextEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}"));
        type_ted->setFrameShape(QFrame::NoFrame);
        type_ted->setFrameShadow(QFrame::Sunken);
        grouppb = new QPushButton(centralwidget);
        grouppb->setObjectName(QString::fromUtf8("grouppb"));
        grouppb->setGeometry(QRect(510, 14, 100, 32));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Narrow")});
        font2.setPointSize(14);
        font2.setBold(true);
        grouppb->setFont(font2);
        grouppb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"font-size:14pt;\n"
"border:1px solid gray;\n"
"border-top-left-radius:20px;\n"
"border-bottom-right-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:#41cd52;\n"
"}"));
        chatpb = new QPushButton(centralwidget);
        chatpb->setObjectName(QString::fromUtf8("chatpb"));
        chatpb->setGeometry(QRect(300, 14, 100, 32));
        chatpb->setFont(font2);
        chatpb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#03dac6;\n"
"color:white;\n"
"font-size:14pt;\n"
"border:0px;\n"
"border-top-left-radius:20px;\n"
"border-bottom-right-radius:20px;\n"
"}"));
        chatpb->setAutoDefault(false);
        chatpb->setFlat(false);
        channelpb = new QPushButton(centralwidget);
        channelpb->setObjectName(QString::fromUtf8("channelpb"));
        channelpb->setGeometry(QRect(90, 14, 100, 32));
        channelpb->setFont(font2);
        channelpb->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"background:white;\n"
"font-size:14pt;\n"
"border:1px solid gray;\n"
"border-top-left-radius:20px;\n"
"border-bottom-right-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:#41cd52;\n"
"}\n"
""));
        addpb = new QPushButton(centralwidget);
        addpb->setObjectName(QString::fromUtf8("addpb"));
        addpb->setGeometry(QRect(470, 512, 100, 31));
        addpb->setFont(font2);
        addpb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(85, 170, 255);\n"
"font-size:14pt;\n"
"border-radius:10px;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(441, 430, 44, 44));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(false);
        pushButton->setAcceptDrops(false);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot_20230625_074115_Bale.jpg);"));
        pushButton->setFlat(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(165, 513, 120, 31));
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(240, 240, 240);"));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        chat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 26));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        chat->setMenuBar(menubar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionLOg_out);
        menuOptions->addSeparator();
        menuOptions->addAction(actionExit);
        menuOptions->addSeparator();
        menuOptions->addAction(actionSwitch_account);
        menuOptions->addSeparator();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QMainWindow *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "chats", nullptr));
        actionLOg_out->setText(QCoreApplication::translate("chat", "Log out", nullptr));
#if QT_CONFIG(shortcut)
        actionLOg_out->setShortcut(QCoreApplication::translate("chat", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGet_chat_lists->setText(QCoreApplication::translate("chat", "Get chat lists", nullptr));
#if QT_CONFIG(shortcut)
        actionGet_chat_lists->setShortcut(QCoreApplication::translate("chat", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("chat", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("chat", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitch_account->setText(QCoreApplication::translate("chat", "Switch account", nullptr));
#if QT_CONFIG(shortcut)
        actionSwitch_account->setShortcut(QCoreApplication::translate("chat", "Ctrl+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        label_2->setText(QString());
#if QT_CONFIG(tooltip)
        add_user_lineEdit->setToolTip(QCoreApplication::translate("chat", "Type_channel_name", nullptr));
#endif // QT_CONFIG(tooltip)
        add_user_lineEdit->setPlaceholderText(QCoreApplication::translate("chat", "  Type user_name", nullptr));
        type_ted->setPlaceholderText(QCoreApplication::translate("chat", " Type message", nullptr));
        grouppb->setText(QCoreApplication::translate("chat", "groups", nullptr));
        chatpb->setText(QCoreApplication::translate("chat", "chats", nullptr));
        channelpb->setText(QCoreApplication::translate("chat", "chanels", nullptr));
        addpb->setText(QCoreApplication::translate("chat", "add", nullptr));
        pushButton->setText(QString());
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("chat", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        textEdit_2->setHtml(QCoreApplication::translate("chat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600; color:#55aaff;\">add</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600; color:#0000ff;\">contact</span></p></body></html>", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("chat", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
