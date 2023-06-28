/********************************************************************************
** Form generated from reading UI file 'channel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNEL_H
#define UI_CHANNEL_H

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

class Ui_channel
{
public:
    QAction *Logout;
    QAction *action_Get_channel_list;
    QWidget *centralwidget;
    QPushButton *grouppb;
    QListWidget *list;
    QLineEdit *jo_channel_lineEdit;
    QTextEdit *chat_ted;
    QPushButton *joinpb;
    QPushButton *channelpb;
    QPushButton *chatpb;
    QTextEdit *type_ted;
    QPushButton *creatpb;
    QLineEdit *cr_chanel_lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuSeting;

    void setupUi(QMainWindow *channel)
    {
        if (channel->objectName().isEmpty())
            channel->setObjectName(QString::fromUtf8("channel"));
        channel->resize(700, 600);
        channel->setMinimumSize(QSize(700, 600));
        channel->setMaximumSize(QSize(700, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/Screenshot_20230626_132056_Chrome.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        channel->setWindowIcon(icon);
        channel->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QLineEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}\n"
""));
        Logout = new QAction(channel);
        Logout->setObjectName(QString::fromUtf8("Logout"));
        action_Get_channel_list = new QAction(channel);
        action_Get_channel_list->setObjectName(QString::fromUtf8("action_Get_channel_list"));
        centralwidget = new QWidget(channel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        grouppb = new QPushButton(centralwidget);
        grouppb->setObjectName(QString::fromUtf8("grouppb"));
        grouppb->setGeometry(QRect(510, 14, 100, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(14);
        font.setBold(true);
        grouppb->setFont(font);
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
        list = new QListWidget(centralwidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(490, 60, 200, 414));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        list->setFont(font1);
        list->setStyleSheet(QString::fromUtf8("border:5px solid  purple;"));
        jo_channel_lineEdit = new QLineEdit(centralwidget);
        jo_channel_lineEdit->setObjectName(QString::fromUtf8("jo_channel_lineEdit"));
        jo_channel_lineEdit->setGeometry(QRect(290, 530, 170, 31));
        chat_ted = new QTextEdit(centralwidget);
        chat_ted->setObjectName(QString::fromUtf8("chat_ted"));
        chat_ted->setGeometry(QRect(10, 60, 475, 370));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setBold(true);
        chat_ted->setFont(font2);
        chat_ted->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"border-image: url(:/photo/image/Screenshot_2023-06-26-19-28-14-376-edit_org.telegram.messenger.jpg);\n"
"border-radius:8px;\n"
"}"));
        chat_ted->setReadOnly(true);
        joinpb = new QPushButton(centralwidget);
        joinpb->setObjectName(QString::fromUtf8("joinpb"));
        joinpb->setGeometry(QRect(470, 530, 100, 31));
        joinpb->setFont(font);
        joinpb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(0, 170, 0);\n"
"font-size:14pt;\n"
"border-radius:10px;\n"
"}"));
        channelpb = new QPushButton(centralwidget);
        channelpb->setObjectName(QString::fromUtf8("channelpb"));
        channelpb->setGeometry(QRect(90, 14, 100, 32));
        channelpb->setFont(font);
        channelpb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#03dac6;\n"
"color:white;\n"
"font-size:14pt;\n"
"border:0px;\n"
"border-top-left-radius:20px;\n"
"border-bottom-right-radius:20px;\n"
"}"));
        chatpb = new QPushButton(centralwidget);
        chatpb->setObjectName(QString::fromUtf8("chatpb"));
        chatpb->setGeometry(QRect(300, 14, 100, 32));
        chatpb->setFont(font);
        chatpb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        chatpb->setAutoDefault(false);
        chatpb->setFlat(false);
        type_ted = new QTextEdit(centralwidget);
        type_ted->setObjectName(QString::fromUtf8("type_ted"));
        type_ted->setGeometry(QRect(10, 430, 431, 44));
        type_ted->setFont(font2);
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
        creatpb = new QPushButton(centralwidget);
        creatpb->setObjectName(QString::fromUtf8("creatpb"));
        creatpb->setGeometry(QRect(470, 490, 100, 31));
        creatpb->setFont(font);
        creatpb->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);\n"
"font-size:14pt;\n"
"border-radius:10px;"));
        cr_chanel_lineEdit = new QLineEdit(centralwidget);
        cr_chanel_lineEdit->setObjectName(QString::fromUtf8("cr_chanel_lineEdit"));
        cr_chanel_lineEdit->setGeometry(QRect(290, 490, 170, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 490, 31, 31));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot_20230626_132056_Chrome.jpg);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 530, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot_20230626_132056_Chrome.jpg);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(441, 430, 44, 44));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(false);
        pushButton->setAcceptDrops(false);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/photo/image/logo_tell.jpg);\n"
"border-image: url(:/photo/image/Screenshot_20230625_074115_Bale.jpg);"));
        pushButton->setFlat(true);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 491, 120, 31));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(160, 531, 120, 31));
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(240, 240, 240);"));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 71, 41));
        channel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(channel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 21));
        menuSeting = new QMenu(menubar);
        menuSeting->setObjectName(QString::fromUtf8("menuSeting"));
        channel->setMenuBar(menubar);

        menubar->addAction(menuSeting->menuAction());
        menuSeting->addAction(Logout);
        menuSeting->addSeparator();
        menuSeting->addAction(action_Get_channel_list);

        retranslateUi(channel);

        QMetaObject::connectSlotsByName(channel);
    } // setupUi

    void retranslateUi(QMainWindow *channel)
    {
        channel->setWindowTitle(QCoreApplication::translate("channel", "Channels", nullptr));
        Logout->setText(QCoreApplication::translate("channel", "Log out", nullptr));
#if QT_CONFIG(shortcut)
        Logout->setShortcut(QCoreApplication::translate("channel", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Get_channel_list->setText(QCoreApplication::translate("channel", " Get channel list", nullptr));
#if QT_CONFIG(shortcut)
        action_Get_channel_list->setShortcut(QCoreApplication::translate("channel", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        grouppb->setText(QCoreApplication::translate("channel", "groups", nullptr));
#if QT_CONFIG(tooltip)
        jo_channel_lineEdit->setToolTip(QCoreApplication::translate("channel", "Type_channel_name", nullptr));
#endif // QT_CONFIG(tooltip)
        jo_channel_lineEdit->setPlaceholderText(QCoreApplication::translate("channel", " Type_channel_name", nullptr));
        joinpb->setText(QCoreApplication::translate("channel", "join", nullptr));
        channelpb->setText(QCoreApplication::translate("channel", "chanels", nullptr));
        chatpb->setText(QCoreApplication::translate("channel", "chats", nullptr));
        type_ted->setPlaceholderText(QCoreApplication::translate("channel", " Type message", nullptr));
        creatpb->setText(QCoreApplication::translate("channel", "create", nullptr));
#if QT_CONFIG(tooltip)
        cr_chanel_lineEdit->setToolTip(QCoreApplication::translate("channel", "Type_channel_name", nullptr));
#endif // QT_CONFIG(tooltip)
        cr_chanel_lineEdit->setPlaceholderText(QCoreApplication::translate("channel", " Type_channel_name", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("channel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#00aa00;\">New</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#4eea72;\">Channel</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("channel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#00aa00;\">Join</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#4eea72;\">Channel</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("channel", "PushButton", nullptr));
        menuSeting->setTitle(QCoreApplication::translate("channel", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class channel: public Ui_channel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNEL_H
