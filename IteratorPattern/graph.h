#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"
#include "graphiterator.h"
#include "subject.h"

#include <QMap>
#include <QSharedPointer>

class Graph : public Subject
{
public:
    Graph();
    QMap< int, QSharedPointer<Vertex> > getGraph();

    GraphIterator begin();
    GraphIterator end();

    bool checkCin();
    bool checkVertex(int value, QSharedPointer<Vertex>);
    bool checkNeighboursCount(int value);

    void attach(Observer *observer) override;
    void detach(Observer *observer) override;
    void notify() override;
    void createMessage(const QString& text);

private:
    int vertexCount = 0;
    QMap< int, QSharedPointer<Vertex> > graph;
    QString message;
    QList<Observer*> observers;
};

#endif // GRAPH_H
