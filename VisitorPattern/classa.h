#ifndef CLASSA_H
#define CLASSA_H

#include "abstractclassforvisitor.h"

#include <iostream>

class classA : public AbstractClassForVisitor
{
public:
    classA();
    void AcceptVisitor(Visitor& visitor) const override;
    void DoSomethingA() const;
    void DoSomethingB() const;
};

#endif // CLASSA_H
