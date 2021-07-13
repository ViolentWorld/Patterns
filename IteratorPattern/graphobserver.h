#ifndef GRAPHOBSERVER_H
#define GRAPHOBSERVER_H

#include "observer.h"
#include "graph.h"

class GraphObserver : public Observer
{
public:
    GraphObserver(Graph& graph);
    void update(const QString &messageFromSubject) override;
    void remove();
    void printInfo();

private:
    QString _messageFromSubject;
    Graph& _graph;
    int number;
    static int staticNumber;
};

#endif // GRAPHOBSERVER_H
