#ifndef VISITORFORB_H
#define VISITORFORB_H

#include "visitor.h"

#include <iostream>

class VisitorForB : public Visitor
{
public:
    VisitorForB();
    void VisitObjectA(const classA& object) const override;
    void VisitObjectB(const classB& object) const override;
};

#endif // VISITORFORB_H
