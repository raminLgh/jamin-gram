#include "chat.h"
#include "ui_chat.h"

#include "channel.h"
#include "groups.h"
#include "concatenate_string.h"

extern person User;
extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;

chat::chat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
}

void chat::on_channelpb_clicked()
{
    chat_page = this;
    if(channel_page==nullptr){
       channel* c1 = new channel();
       this->hide();
       c1->show();
    }
    else{
        channel_page->show();
        this->hide();
    }
}

void chat::on_grouppb_clicked()
{
    chat_page = this;
    if(group_page==nullptr){
       groups* g1 = new groups();
       this->hide();
       g1->show();
    }
    else{
        group_page->show();
        this->hide();
    }
}
