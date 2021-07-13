#ifndef OBSERVER_H
#define OBSERVER_H

#include <QString>


class Observer
{
public:
    Observer();
    virtual void update(const QString& messageFromSubject) = 0;
};

#endif // OBSERVER_H
