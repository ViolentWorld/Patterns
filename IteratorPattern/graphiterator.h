#ifndef GRAPHITERATOR_H
#define GRAPHITERATOR_H

#include "vertex.h"

#include <QQueue>
#include <QMap>
#include <iterator>

class GraphIterator : public std::iterator<std::input_iterator_tag, Vertex>
{
public:
    GraphIterator(QSharedPointer<Vertex> p);
    bool operator!=(GraphIterator const& other) const;
    typename GraphIterator::reference operator*() const;
    GraphIterator& operator++();

private:
    QSharedPointer<Vertex> _p;
    QQueue< QSharedPointer<Vertex> > q;
    bool isFirst = true;
    QMap<QSharedPointer<Vertex>, bool> isUsed;
};

#endif // GRAPHITERATOR_H
