#include "vertex.h"

Vertex::Vertex()
{

}

void Vertex::addNeighbour(QSharedPointer<Vertex> vertex)
{
    neighbors.append(vertex);
}

QList<QSharedPointer<Vertex>> Vertex::getNeighbors()
{
    return neighbors;
}

void Vertex::setValue(int value)
{
    _value = value;
}

int Vertex::getValue()
{
    return _value;
}
