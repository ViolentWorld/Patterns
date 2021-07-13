#include "classa.h"

classA::classA()
{

}

void classA::AcceptVisitor(Visitor& visitor) const
{
    visitor.VisitObjectA(*this);
}

void classA::DoSomethingB() const
{
    std::cout << "World, Hello! ";
}

void classA::DoSomethingA() const
{
    std::cout << "Hello, world! ";
}
