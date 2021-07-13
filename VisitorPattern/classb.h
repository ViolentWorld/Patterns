#ifndef CLASSB_H
#define CLASSB_H

#include "abstractclassforvisitor.h"

#include <iostream>

class classB : public AbstractClassForVisitor
{
public:
    classB();
    void AcceptVisitor(Visitor& visitor) const override;
    void DoSomethingA() const;
    void DoSomethingB() const;
};

#endif // CLASSB_H
