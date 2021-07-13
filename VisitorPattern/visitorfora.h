#ifndef VISITORFORA_H
#define VISITORFORA_H

#include "visitor.h"

class VisitorForA : public Visitor
{
public:
    VisitorForA();
    void VisitObjectA(const classA& object) const override;
    void VisitObjectB(const classB& object) const override;
};

#endif // VISITORFORA_H
