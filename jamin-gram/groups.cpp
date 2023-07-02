#include "groups.h"
#include "ui_groups.h"
#include "first_page.h"

#include "concatenate_string.h"
#include "channel.h"
#include "chat.h"
//#define setBackgroundColor setBackground
//#define setTextColor setForeground
#define arg_g  14000
#define time_t 15000

extern person User;
extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;

QString save_prv_count2 = "0";
QString flag_gr = "0";

QListWidgetItem* current_group_item = nullptr;

groups::groups(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::groups)
{
    ui->setupUi(this);

    timer_g = new QTimer();
    connect(timer_g,SIGNAL(timeout()),this,SLOT(on_pushButton_2_clicked()));
    timer_g->start(arg_g);

}

groups::~groups()
{
    delete ui;
    delete timer_g;
}

void groups::write_data3()
{
    QString s;
    s+= QDir::currentPath()+'/'+User.name+ "/group_list.txt";
    QFile file(s);
    file.open(QFile::ReadWrite|QFile::Text);

    if(file.isOpen()){
        QTextStream out(&file);

        out<< User.token <<" "<< User.name <<" "<< User.pass <<"\n";

        for(int i=0; i<ui->list->count(); i++){
            out << ui->list->item(i)->text() << "\n";
        }
    }
    file.close();

}

void groups::on_channelpb_clicked()
{
    group_page = this;
    timer_g->stop();

    channel_page->setGeometry(this->geometry());
    channel_page->show();
    dynamic_cast<channel*>(channel_page)->timer_cn->start(arg_g);

    ///first time updatae
    dynamic_cast<channel*>(channel_page)->on_pushButton_2_clicked();

    this->hide();
}

void groups::on_chatpb_clicked()
{
    group_page = this;
    timer_g->stop();

    if(chat_page != nullptr){
       chat_page->setGeometry(this->geometry());
       chat_page->show();
       dynamic_cast<chat*>(chat_page)->timer_ca->start(arg_g);
       dynamic_cast<chat*>(chat_page)->timer_list_chat->start(time_t);

       ///first time update
       dynamic_cast<chat*>(chat_page)->on_pushButton_2_clicked();
       dynamic_cast<chat*>(chat_page)->on_actionGet_chat_lists_triggered();
    }
    else{
        chat* ca = new chat();
        ca->setGeometry(this->geometry());
        ca->show();
        ca->on_actionGet_chat_lists_triggered();
    }

    this->hide();
}

void groups::on_creatpb_clicked()
{
    if(ui->cr_group_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter group's name first");
    }
    else
    {
        concatenate_string c2;
        c2.addString("creategroup?token=");
        c2.addString(User.token);
        c2.addString("&group_name=");
        c2.addString(ui->cr_group_lineEdit->text());

        qDebug()<<c2.getUrl();

        //send request
        QUrl url2(c2.getUrl());
        QNetworkAccessManager* manager2 = new QNetworkAccessManager();
        QNetworkReply* reply2 = manager2->get(QNetworkRequest(url2));

        QObject::connect(reply2,&QNetworkReply::finished,[=](){

            if(reply2->error()==QNetworkReply::NoError){
                //recive reply
                QByteArray data2 = reply2->readAll();
                qDebug()<<data2;
                QJsonDocument duc2 = QJsonDocument::fromJson(data2);
                QJsonObject obj2 = duc2.object();

                QString code = obj2["code"].toString();

                if(code=="200"){
                    QMessageBox::information(this,"message",obj2["message"].toString());

                    QString s;
                    s+=QDir::currentPath()+'/'+User.name+"/groups/"+ui->cr_group_lineEdit->text()+".txt";
                    QFile file(s);
                    file.open(QFile::WriteOnly|QFile::Text);
                    file.close();

                    ui->list->addItem(ui->cr_group_lineEdit->text());
                    ui->cr_group_lineEdit->clear();
                }
                else{
                    QMessageBox::information(this,"Error",obj2["message"].toString());
                    ui->cr_group_lineEdit->clear();
                }
            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
            }
        });
    }
}

void groups::on_joinpb_clicked()
{
    if(ui->jo_group_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter group's name first");
    }
    else
    {
        concatenate_string cs;
        cs.addString("joingroup?token=");
        cs.addString(User.token);
        cs.addString("&group_name=");
        cs.addString(ui->jo_group_lineEdit->text());

        qDebug()<<cs.getUrl();


        //send request
        QUrl url3(cs.getUrl());
        QNetworkAccessManager* manager3 = new QNetworkAccessManager();
        QNetworkReply* reply3 = manager3->get(QNetworkRequest(url3));


        QObject::connect(reply3,&QNetworkReply::finished,[=](){

            if(reply3->error()==QNetworkReply::NoError){
                //recive reply
                QByteArray data3 = reply3->readAll();
                qDebug()<<data3;
                QJsonDocument duc3 = QJsonDocument::fromJson(data3);
                QJsonObject obj3 = duc3.object();

                QString code = obj3["code"].toString();

                if(code=="200"){
                    QMessageBox::information(this,"message",obj3["message"].toString());


                    QString s;
                    s+=QDir::currentPath()+'/'+User.name+"/groups/"+ui->jo_group_lineEdit->text()+".txt";
                    QFile file(s);
                    file.open(QFile::WriteOnly|QFile::Text);
                    file.close();


                    ui->list->addItem(ui->jo_group_lineEdit->text());
                    ui->jo_group_lineEdit->clear();
                }
                else{
                    QMessageBox::information(this,"Eror",obj3["message"].toString());
                    ui->jo_group_lineEdit->clear();
                }

            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply3->errorString();
            }

         });

    }
}

void groups::on_actionLog_out_triggered()
{
    concatenate_string cs;
    cs.addString("logout?username=");
    cs.addString(User.name);
    cs.addString("&password=");
    cs.addString(User.pass);

    qDebug()<<cs.getUrl();

    //send request
    QUrl url(cs.getUrl());
    QNetworkAccessManager* manager = new QNetworkAccessManager();
    QNetworkReply* reply = manager->get(QNetworkRequest(url));

    QObject::connect(reply,&QNetworkReply::finished,[=](){

        if(reply->error()==QNetworkReply::NoError){
            //recive reply
            QByteArray data = reply->readAll();
            qDebug()<<data;
            QJsonDocument duc = QJsonDocument::fromJson(data);
            QJsonObject obj = duc.object();


            QString code = obj["code"].toString();

            if(code=="200"){
                QMessageBox::information(this,"info",obj["message"].toString());

                QString s;
                s+=QDir::currentPath()+'/'+User.name;
                QDir d(s);
                d.removeRecursively();

                this->close();
                if(channel_page != nullptr)
                channel_page->close();
                if(chat_page != nullptr)
                chat_page->close();
            }
            else{
                QMessageBox::information(this,"Error",obj["message"].toString());
            }
        }
        else{
            qDebug()<< "ERROR to recive data from server: "<<reply->errorString();
        }

     });

}

void groups::on_actionGet_group_list_triggered()
{
    //check if our user alredy in channel
    concatenate_string  cs;
    cs.addString("getgrouplist?token=");
    cs.addString(User.token);

    qDebug()<<cs.getUrl();

    QUrl url_d(cs.getUrl());
    QNetworkAccessManager* manager_d = new QNetworkAccessManager();
    QNetworkReply* reply_d = manager_d->get(QNetworkRequest(url_d));
    QObject::connect(reply_d,&QNetworkReply::finished,[=](){
        if(reply_d->error()==QNetworkReply::NoError){
            //recive reply
            QByteArray data_d = reply_d->readAll();
            qDebug()<<data_d;
            QJsonDocument duc = QJsonDocument::fromJson(data_d);
            QJsonObject obj = duc.object();
            QString code = obj["code"].toString();
            if(code=="200"){

                //QMessageBox::information(this,"info",obj["message"].toString());


                QString tmp = obj["message"].toString();
                qDebug()<<tmp;

                QString count;
                for(int i=0; i<tmp.length();++i){
                   if(tmp[i]=='-'){
                       i++;
                    for(int j =i; j < tmp.length();j++){
                    count += tmp[j];
                    if(tmp[j+1]=='-'){
                        break;
                    }
                   }
                    break;
                }
                }
                qDebug()<< "Number of groups: " << count;

                QString curr;
                if(current_group_item != nullptr){
                curr = current_group_item->text();
                current_group_item = nullptr;
                }
                ui->list->clear();
                QString m;

                for(int i=0;i<count.toInt();++i){
                    m = "block " + QString::number(i);
                    qDebug()<< m;

                    QString s;
                    s+=QDir::currentPath()+'/'+User.name+"/groups/"+(obj[m].toObject())["group_name"].toString()+".txt";
                    QFile file(s);
                    if(!file.exists()){
                        qDebug()<<s;
                        qDebug()<<"file is open";
                        file.open(QFile::WriteOnly|QFile::Text);
                        if(file.isOpen()){
                            qDebug()<<"in file";
                        }
                        file.close();

                    }

                    ui->list->addItem((obj[m].toObject())["group_name"].toString());

                }

                if(curr != ""){
                    for(int i=0; i<ui->list->count(); ++i){
                        if(ui->list->item(i)->text() == curr){
                            current_group_item = ui->list->item(i);
                            break;
                        }
                    }
                ui->list->setCurrentItem(current_group_item);
                current_group_item->setBackground((QBrush)"light blue");
                current_group_item->setForeground((QBrush)"yellow");
                }
                qDebug()<< obj;
            }
            else{
                QMessageBox::information(this,"Error",obj["message"].toString());
            }
        }
        else{
             qDebug()<< "ERROR to recive data from server: "<<reply_d->errorString();
             qDebug()<<"in Offline mode";

             QString s;
             s += QDir::currentPath()+ "/"+ User.name+ "/group_list.txt";
             QFile file(s);
             file.open(QFile::ReadWrite|QFile::Text);

             QTextStream in(&file);
             QString _token;
             QString _name;
             QString _pass;
             in >> _token >> _name >> _pass;

             QString listmember;

             while(1){
                 in>>listmember;
                 qDebug()<<listmember;

                 if(listmember=="")
                     break;

                 ui->list->addItem(listmember);
             }
         file.close();

        }
    });


}

void groups::on_list_itemClicked(QListWidgetItem *item)
{
    ui->chat_ted->clear();

    if(current_group_item==nullptr){
        current_group_item=item;
        item->setBackground((QBrush)"light blue");
        item->setForeground((QBrush)"yellow");
    }
    else{
        current_group_item->setBackground((QBrush)"white");
        current_group_item->setForeground((QBrush)"black");

        current_group_item=item;
        item->setBackground((QBrush)"light blue");
        item->setForeground((QBrush)"yellow");
    }
    save_prv_count2 = "0";
    flag_gr = "0";
    on_pushButton_2_clicked();
}

void groups::on_pushButton_clicked()
{
    if(ui->type_ted->toPlainText()==""){
        QMessageBox::information(this,"message","Type something first");
    }
    else if(current_group_item==nullptr){
        QMessageBox::information(this,"message","Choose one group to send message");
    }
    else{
        concatenate_string concat;
        concat.addString("sendmessagegroup?token=");
        concat.addString(User.token);
        concat.addString("&dst=");
        concat.addString(current_group_item->text()); ///that is item clicked on listWidget
        concat.addString("&body=");
        concat.addString(ui->type_ted->toPlainText());

        QString accuracy2 = current_group_item->text();

        qDebug()<<concat.getUrl();

        //send request
        QUrl url(concat.getUrl());
        QNetworkAccessManager* manager = new QNetworkAccessManager();
        QNetworkReply* reply = manager->get(QNetworkRequest(url));


        QObject::connect(reply,&QNetworkReply::finished,[=](){

            if(reply->error()==QNetworkReply::NoError){
                //recive reply
                QByteArray data = reply->readAll();
                qDebug()<<data;
                QJsonDocument duc = QJsonDocument::fromJson(data);
                QJsonObject obj = duc.object();


                QString code = obj["code"].toString();

                if(code=="200"){
                    if(accuracy2 == current_group_item->text()){
                    ///////append message
                    ui->chat_ted->setTextColor(QColor(0, 0, 255));
                    ui->chat_ted->append("you: [now]");
                    ui->chat_ted->setAlignment(Qt::AlignRight);
                    ui->chat_ted->append(ui->type_ted->toPlainText());
                    //QMessageBox::information(this,"message",obj["message"].toString());
                    }
                    ///////// clear textEdit type
                    ui->type_ted->clear();
                }
                else{
                    QMessageBox::information(this,"message",obj["message"].toString());
                    ui->type_ted->clear();
                }
            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply->errorString();
                //ui->type_ted->clear();
            }

         });
    }
}

void groups::on_pushButton_2_clicked()
{
    if(current_group_item==nullptr){
        //QMessageBox::warning(this,"message","Choose one group");
    }
    else{
    concatenate_string concat;
    concat.addString("getgroupchats?token=");
    concat.addString(User.token);
    concat.addString("&dst=");
    concat.addString(current_group_item->text()); ///that is item clicked on listWidget
    QString accuracy = current_group_item->text();

    qDebug()<<concat.getUrl();
    //send request
    QUrl url(concat.getUrl());
    QNetworkAccessManager* manager = new QNetworkAccessManager();
    QNetworkReply* reply = manager->get(QNetworkRequest(url));


    QObject::connect(reply,&QNetworkReply::finished,[=](){

        if(reply->error()==QNetworkReply::NoError){
            //recive reply
            QByteArray data = reply->readAll();
            qDebug()<<data;
            QJsonDocument duc = QJsonDocument::fromJson(data);
            QJsonObject obj = duc.object();


            QString code = obj["code"].toString();

            if(code=="200"){
                //QMessageBox::information(this,"message",obj["message"].toString());

                QString tmp =obj["message"].toString();
                QString count;

                /////extract number of message
                for(int i=0; i<tmp.length();++i){
                   if(tmp[i]=='-'){
                       i++;
                    for(int j =i; j < tmp.length();j++){
                    count += tmp[j];
                    if(tmp[j+1]=='-'){
                        break;
                    }
                   }
                    break;
                }
                }

                qDebug()<<"number of message"<<count;

                ///read data from block
                if(save_prv_count2 != count){

                ///////////////////////////////////
                QString s;
                s+=QDir::currentPath()+'/'+User.name+"/groups/"+accuracy+".txt";
                QFile file(s);
                /////////////////
                file.open(QFile::ReadOnly|QFile::WriteOnly);
                if(file.isOpen()){
                   qDebug()<<"now we are at file and want to write";
                   file.write(duc.toJson());
                  }
                  else
                     qDebug()<<"can't open file for write";
                file.close();

                if(accuracy == current_group_item->text()){
                ui->chat_ted->clear();

                QString b1;
                for(int i=0;i<count.toInt();++i){
                    b1 = "block " + QString::number(i);

                    QString body = (obj[b1].toObject())["body"].toString();
                    QString sender = (obj[b1].toObject())["src"].toString();
                    QString date = (obj[b1].toObject())["date"].toString();
                    date.replace('-','/');

                    /////////////////////////////////////////
                    if(body!=""){


                    //////////////////////////////////////////

                    if(sender == User.name){
                        ui->chat_ted->setTextColor(QColor(0, 0, 255));
                        ui->chat_ted->append("you: ["+date+']');
                        ui->chat_ted->setAlignment(Qt::AlignRight);
                        ui->chat_ted->append(body);
                    }
                    else{
                        ui->chat_ted->setTextColor(QColor(85, 0, 127));
                        ui->chat_ted->append(sender+": ["+date+']');
                        ui->chat_ted->setAlignment(Qt::AlignLeft);
                        ui->chat_ted->append(body);
                    }
                  }
                }
                flag_gr = "1";
                save_prv_count2 = count;

                }
                }
            }
            else{
                QMessageBox::information(this,"message",obj["message"].toString());
            }
        }
        else{
            qDebug()<< "ERROR to recive data from server: "<<reply->errorString();

            if(save_prv_count2 == "0"&& flag_gr == "0"&& accuracy == current_group_item->text()){
                ui->chat_ted->clear();
                QString _s;
                _s += QDir::currentPath()+'/'+User.name+"/groups/"+accuracy+".txt";
                QFile file(_s);
                file.open(QFile::ReadOnly|QFile::WriteOnly);
                qDebug()<<_s;

                QByteArray data = file.readAll();
                QJsonDocument ducu = QJsonDocument::fromJson(data);
                QJsonObject object = ducu.object();
                file.close();

                QString _temp =object["message"].toString();
                QString _count;

                for(int i=0; i<_temp.length();++i){
                   if(_temp[i]=='-'){
                       i++;
                    for(int j =i; j < _temp.length();j++){
                    _count += _temp[j];
                    if(_temp[j+1]=='-'){
                        break;
                    }
                   }
                    break;
                  }
                }

                qDebug()<<"number of message"<< _count;

                QString b1;
                for(int i=0;i<_count.toInt();++i){
                    b1 = "block " + QString::number(i);

                    QString body = (object[b1].toObject())["body"].toString();
                    QString sender = (object[b1].toObject())["src"].toString();
                    QString date = (object[b1].toObject())["date"].toString();
                    date.replace('-','/');

                    if(body!=""){

                    //////////////////////////////////////////
                    if(sender == User.name){
                        ui->chat_ted->setTextColor(QColor(0, 0, 255));
                        ui->chat_ted->append("you: ["+date+']');
                        ui->chat_ted->setAlignment(Qt::AlignRight);
                        ui->chat_ted->append(body);
                    }
                    else{
                        ui->chat_ted->setTextColor(QColor(85, 0, 127));
                        ui->chat_ted->append(sender+": ["+date+']');
                        ui->chat_ted->setAlignment(Qt::AlignLeft);
                        ui->chat_ted->append(body);
                        }
                    }
                  }
                flag_gr = "1";
                save_prv_count2 = _count;
            }
            else
                qDebug()<< "note read from file!";
        }
    });
 }
}




void groups::on_actionExit_triggered()
{
    write_data3();
    this->close();

    if(channel_page != nullptr){
        dynamic_cast<channel*>(channel_page)->write_data();
        channel_page->close();
    }

    if(chat_page != nullptr){
        dynamic_cast<chat*>(chat_page)->write_data2();
        chat_page->close();
    }
}


void groups::on_actionSwitch_account_triggered()
{
    first_page* fp = new first_page();
    fp->setGeometry(this->geometry());
    fp->show();
    on_actionExit_triggered();
}

