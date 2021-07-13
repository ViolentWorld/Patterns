#include "classb.h"

classB::classB()
{

}

void classB::AcceptVisitor(Visitor& visitor) const
{
    visitor.VisitObjectB(*this);
}

void classB::DoSomethingB() const
{
    std::cout << "World, Hello! ";
}

void classB::DoSomethingA() const
{
    std::cout << "Hello, world! ";
}
