#include "graphobserver.h"

#include <iostream>

GraphObserver::GraphObserver(Graph& graph)
    :_graph(graph)
{
    _graph.attach(this);
    std::cout << std::endl << "Hi! My name is observer " << ++GraphObserver::staticNumber
              << ", glad to see you today!" << std::endl;
    number = staticNumber;
}

void GraphObserver::update(const QString &messageFromSubject)
{
    _messageFromSubject = messageFromSubject;
    printInfo();
}

void GraphObserver::remove()
{
    _graph.detach(this);
}

void GraphObserver::printInfo()
{
    std::cout << "New message: " << _messageFromSubject.toStdString() << std::endl << std::endl;
}
