#ifndef ABSTRACTCLASSFORVISITOR_H
#define ABSTRACTCLASSFORVISITOR_H

#include "visitor.h"

class AbstractClassForVisitor
{
public:
    AbstractClassForVisitor();
    virtual void AcceptVisitor(Visitor& visitor) const = 0;
};

#endif // ABSTRACTCLASSFORVISITOR_H
