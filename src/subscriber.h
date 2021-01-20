#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H
#include "publisher.h"

class Subscriber
{
public:
    Subscriber();
    virtual void update(Publisher publisher) = 0;
};

#endif // SUBSCRIBER_H
