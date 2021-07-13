#include "graph.h"
#include "graphiterator.h"
#include "graphobserver.h"

#include <QCoreApplication>
#include <iostream>

int GraphObserver::staticNumber = 0;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Graph graph;
    GraphObserver observer(graph);

    GraphIterator iterator = graph.begin();

    std::cout << std::endl << std::endl;
    while(iterator != graph.end()){
        ++iterator;
        graph.createMessage("Iterator moved on element with value " + QString::number((*iterator).getValue()));
    }

    return a.exec();
}
