#include "publisher.h"

Publisher::Publisher()
{

}

Publisher::notifySubscribers()
{
    QVector<Subscriber>::iterator it;
    //Does this method guarantee sequential notification? If not, revert to size_t and indexing the elements
    for (it = subscribers.begin(); it != subscribers.end(); ++it)
    {
        it->update();
    }
}
