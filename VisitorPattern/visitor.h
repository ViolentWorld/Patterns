#ifndef VISITOR_H
#define VISITOR_H

class classA;
class classB;

class Visitor
{
public:
    Visitor();
    virtual void VisitObjectA(const classA& object) const = 0;
    virtual void VisitObjectB(const classB& object) const = 0;
};

#endif // VISITOR_H
