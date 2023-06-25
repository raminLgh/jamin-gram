#ifndef CONCATENATE_STRING_H
#define CONCATENATE_STRING_H

#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>

class concatenate_string
{

private:
    QString url;
public:
    concatenate_string();

    void addString(QString item);

    QString getUrl();
};

#endif // CONCATENATE_STRING_H
