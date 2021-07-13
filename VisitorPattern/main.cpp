#include <QCoreApplication>

#include "visitorfora.h"
#include "visitorforb.h"
#include "classa.h"
#include "classb.h"
#include "abstractclassforvisitor.h"

#include <memory>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto objectA = std::make_shared<classA>();
    auto objectB = std::make_shared<classB>();
    VisitorForA visitorA;
    VisitorForB visitorB;

    objectA->AcceptVisitor(visitorA);
    objectB->AcceptVisitor(visitorA);
    objectA->AcceptVisitor(visitorB);
    objectB->AcceptVisitor(visitorB);


    return a.exec();
}
