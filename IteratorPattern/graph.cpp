#include "graph.h"

#include <QQueue>
#include <QList>
#include <iostream>

Graph::Graph()
{   
    int value;
    int neighboursCount;

    std::cout << "Enter vertex count - ";
    std::cin >> vertexCount;
    while(!checkCin())
        std::cin >> vertexCount;


    for(int i = 0; i < vertexCount; i++){
        graph[i] = QSharedPointer<Vertex>(new Vertex());
    }

    for(int i = 0; i < vertexCount; i++){
        std::cout << std::endl << "Current vertex: " << i << std::endl;
        std::cout << "Enter vertex value - ";

        std::cin >> value;
        while(!checkCin())
            std::cin >> value;
        graph[i]->setValue(value);

        if(vertexCount == 1)
            break;

        std::cout << "Enter neighbors count - ";
        std::cin >> neighboursCount;
        while(!checkCin() || !checkNeighboursCount(neighboursCount))
            std::cin >> neighboursCount;

        for(int j = 0; j < neighboursCount; j++){
            std::cout << "Enter neighbor - ";
            std::cin >> value;
            while(!checkCin() || !checkVertex(value, graph[i]))
                std::cin >> value;
            graph[i]->addNeighbour(graph[value]);
        }
    }
}

QMap< int, QSharedPointer<Vertex> > Graph::getGraph()
{
    return graph;
}

GraphIterator Graph::begin()
{
    return GraphIterator(graph[0]);
}

GraphIterator Graph::end()
{
  return GraphIterator(graph[0 + graph.size()]);
}

bool Graph::checkCin()
{
    if(std::cin.fail()){
        std::cout << "Please enter numbers only." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return false;
    }
    return true;
}

bool Graph::checkVertex(int value, QSharedPointer<Vertex> current)
{
    if(graph.count(value) == 0 /*|| graph[value]->getNeighbors().contains(current)*/
            || current->getNeighbors().contains(graph[value])){
        std::cout << "Incorect neighbour number" << std::endl;
        return false;
    }
    return true;
}

bool Graph::checkNeighboursCount(int value)
{
    if(value > (vertexCount - 1) || value < 0){
        std::cout << "Incorect neighbours count" << std::endl;
        return false;
    }
    return true;
}

void Graph::attach(Observer *observer)
{
    observers.push_back(observer);
}

void Graph::detach(Observer *observer)
{
    observers.removeOne(observer);
}

void Graph::notify()
{
    QList<Observer*>::iterator iterator = observers.begin();
    while(iterator != observers.end()){
        (*iterator)->update(message);
        ++iterator;
    }
}

void Graph::createMessage(const QString &text)
{
    message = text;
    notify();
}
