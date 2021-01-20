#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "subscriber.h"
#include <QtCore>

class Publisher
{
private:
    QVector<Subscriber> subscribers;
public:
    Publisher();
    notifySubscribers();
};

#endif // PUBLISHER_H
