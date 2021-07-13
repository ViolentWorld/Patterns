#include "visitorforb.h"
#include "classa.h"
#include "classb.h"

VisitorForB::VisitorForB()
{

}

void VisitorForB::VisitObjectA(const classA &object) const
{
    object.DoSomethingA();
    std::cout << " :VisitorB" << std::endl;
}

void VisitorForB::VisitObjectB(const classB& object) const
{
    object.DoSomethingB();
    std::cout << " :VisitorB" << std::endl;
}
