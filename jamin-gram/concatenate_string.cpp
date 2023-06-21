#include "concatenate_string.h"

concatenate_string::concatenate_string()
{
    this->url = "http://api.barafardayebehtar.ml:8080/";
}

void concatenate_string::addString(QString item)
{
    this->url += item;
}

QString concatenate_string::getUrl()
{
    return this->url;
}
