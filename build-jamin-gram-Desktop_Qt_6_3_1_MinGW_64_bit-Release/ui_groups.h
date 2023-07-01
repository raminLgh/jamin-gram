/********************************************************************************
** Form generated from reading UI file 'groups.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPS_H
#define UI_GROUPS_H

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

class Ui_groups
{
public:
    QAction *actionLog_out;
    QAction *actionGet_group_list;
    QWidget *centralwidget;
    QPushButton *channelpb;
    QTextEdit *textEdit_2;
    QTextEdit *chat_ted;
    QPushButton *joinpb;
    QTextEdit *textEdit;
    QListWidget *list;
    QTextEdit *type_ted;
    QPushButton *grouppb;
    QLineEdit *jo_group_lineEdit;
    QLineEdit *cr_group_lineEdit;
    QPushButton *chatpb;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;
    QPushButton *creatpb;
    QMenuBar *menubar;
    QMenu *menuOptions;

    void setupUi(QMainWindow *groups)
    {
        if (groups->objectName().isEmpty())
            groups->setObjectName(QString::fromUtf8("groups"));
        groups->resize(700, 600);
        groups->setMinimumSize(QSize(700, 600));
        groups->setMaximumSize(QSize(700, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/image/Screenshot_20230626_130222_Telegram.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        groups->setWindowIcon(icon);
        groups->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QLineEdit:focus{\n"
"border:1px solid #03dac6;\n"
"}"));
        actionLog_out = new QAction(groups);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        actionGet_group_list = new QAction(groups);
        actionGet_group_list->setObjectName(QString::fromUtf8("actionGet_group_list"));
        centralwidget = new QWidget(groups);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        channelpb = new QPushButton(centralwidget);
        channelpb->setObjectName(QString::fromUtf8("channelpb"));
        channelpb->setGeometry(QRect(90, 14, 100, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(14);
        font.setBold(true);
        channelpb->setFont(font);
        channelpb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(165, 531, 120, 31));
        textEdit_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(240, 240, 240);"));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
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
        joinpb = new QPushButton(centralwidget);
        joinpb->setObjectName(QString::fromUtf8("joinpb"));
        joinpb->setGeometry(QRect(470, 530, 100, 31));
        joinpb->setFont(font);
        joinpb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(0, 170, 0);\n"
"font-size:14pt;\n"
"border-radius:10px;\n"
"}"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(165, 491, 120, 31));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);
        list = new QListWidget(centralwidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(490, 60, 200, 414));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        list->setFont(font2);
        list->setStyleSheet(QString::fromUtf8("border:5px solid  purple;"));
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
        grouppb->setFont(font);
        grouppb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#03dac6;\n"
"color:white;\n"
"font-size:14pt;\n"
"border:0px;\n"
"border-top-left-radius:20px;\n"
"border-bottom-right-radius:20px;\n"
"}"));
        jo_group_lineEdit = new QLineEdit(centralwidget);
        jo_group_lineEdit->setObjectName(QString::fromUtf8("jo_group_lineEdit"));
        jo_group_lineEdit->setGeometry(QRect(290, 530, 170, 31));
        cr_group_lineEdit = new QLineEdit(centralwidget);
        cr_group_lineEdit->setObjectName(QString::fromUtf8("cr_group_lineEdit"));
        cr_group_lineEdit->setGeometry(QRect(290, 490, 170, 31));
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
"}"));
        chatpb->setAutoDefault(false);
        chatpb->setFlat(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(441, 430, 44, 44));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(false);
        pushButton->setAcceptDrops(false);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot_20230625_074115_Bale.jpg);"));
        pushButton->setFlat(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 530, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot_20230626_130222_Telegram.jpg);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 490, 31, 31));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/image/Screenshot_20230626_130222_Telegram.jpg);"));
        creatpb = new QPushButton(centralwidget);
        creatpb->setObjectName(QString::fromUtf8("creatpb"));
        creatpb->setGeometry(QRect(470, 490, 100, 31));
        creatpb->setFont(font);
        creatpb->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);\n"
"font-size:14pt;\n"
"border-radius:10px;\n"
""));
        groups->setCentralWidget(centralwidget);
        menubar = new QMenuBar(groups);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        groups->setMenuBar(menubar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionLog_out);
        menuOptions->addSeparator();
        menuOptions->addAction(actionGet_group_list);

        retranslateUi(groups);

        QMetaObject::connectSlotsByName(groups);
    } // setupUi

    void retranslateUi(QMainWindow *groups)
    {
        groups->setWindowTitle(QCoreApplication::translate("groups", "groups", nullptr));
        actionLog_out->setText(QCoreApplication::translate("groups", "Log out", nullptr));
#if QT_CONFIG(shortcut)
        actionLog_out->setShortcut(QCoreApplication::translate("groups", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGet_group_list->setText(QCoreApplication::translate("groups", "Get group list", nullptr));
#if QT_CONFIG(shortcut)
        actionGet_group_list->setShortcut(QCoreApplication::translate("groups", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        channelpb->setText(QCoreApplication::translate("groups", "chanels", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("groups", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#00aa00;\">Join</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#4eea72;\">Group</span></p></body></html>", nullptr));
        joinpb->setText(QCoreApplication::translate("groups", "join", nullptr));
        textEdit->setHtml(QCoreApplication::translate("groups", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#00aa00;\">New</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#4eea72;\">Group</span></p></body></html>", nullptr));
        type_ted->setPlaceholderText(QCoreApplication::translate("groups", " Type message", nullptr));
        grouppb->setText(QCoreApplication::translate("groups", "groups", nullptr));
#if QT_CONFIG(tooltip)
        jo_group_lineEdit->setToolTip(QCoreApplication::translate("groups", "Type_channel_name", nullptr));
#endif // QT_CONFIG(tooltip)
        jo_group_lineEdit->setPlaceholderText(QCoreApplication::translate("groups", " Type_group_name", nullptr));
#if QT_CONFIG(tooltip)
        cr_group_lineEdit->setToolTip(QCoreApplication::translate("groups", "Type_channel_name", nullptr));
#endif // QT_CONFIG(tooltip)
        cr_group_lineEdit->setPlaceholderText(QCoreApplication::translate("groups", " Type_group_name", nullptr));
        chatpb->setText(QCoreApplication::translate("groups", "chats", nullptr));
        pushButton->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        creatpb->setText(QCoreApplication::translate("groups", "create", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("groups", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class groups: public Ui_groups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPS_H
