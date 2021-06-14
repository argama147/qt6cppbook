#include "observer.h"

#include <QDebug>

Observer::Observer(QObject *parent) : QObject(parent)
{

}

void Observer::nameChanged(QString name)
{
    qInfo() << __FUNCTION__ << "name=" << name;
}

void Observer::numChanged(int num)
{
    qInfo() << __FUNCTION__ << "name=" << num;
}
