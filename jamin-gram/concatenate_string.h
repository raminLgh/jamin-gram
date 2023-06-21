#ifndef CONCATENATE_STRING_H
#define CONCATENATE_STRING_H

#include <QObject>

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
