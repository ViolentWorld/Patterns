#include "graphiterator.h"

GraphIterator::GraphIterator(QSharedPointer<Vertex> p) :
    _p(p)
{
    isUsed.clear();
}

bool GraphIterator::operator!=(GraphIterator const& other) const
{
    return _p != other._p;
}

typename GraphIterator::reference GraphIterator::operator*() const
{
    return *_p;
}

GraphIterator &GraphIterator::operator++()
{
    if(isFirst){
        isUsed[_p] = true;
        q.push_front(_p);
        isFirst = false;
    }

    if(!q.empty()){
        _p = q.front();
        q.pop_front();

        QList< QSharedPointer<Vertex> > neighbors = _p->getNeighbors();
        for (int i = 0; i < neighbors.count(); i++){
            if (!isUsed[neighbors[i]]) {
                q.push_back(neighbors[i]);
                isUsed[neighbors[i]] = true;
            }
        }
    }
    else
        _p = nullptr;

    return *this;
}
