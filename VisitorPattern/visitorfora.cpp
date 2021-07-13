#include "visitorfora.h"

#include "classa.h"
#include "classb.h"

VisitorForA::VisitorForA()
{

}

void VisitorForA::VisitObjectA(const classA& object) const
{
    object.DoSomethingA();
    std::cout << " :VisitorA" << std::endl;
}

void VisitorForA::VisitObjectB(const classB &object) const
{
    object.DoSomethingB();
    std::cout << " :VisitorA" << std::endl;
}
