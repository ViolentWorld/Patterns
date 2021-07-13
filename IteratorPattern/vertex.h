#ifndef VERTEX_H
#define VERTEX_H

#include <QList>
#include <QSharedPointer>

class Vertex
{
public:
    Vertex();
    void addNeighbour(QSharedPointer<Vertex>);
    QList<QSharedPointer<Vertex>> getNeighbors();
    void setValue(int value);
    int getValue();

private:
    int _value;
    QList< QSharedPointer<Vertex> > neighbors;
};

#endif // VERTEX_H
