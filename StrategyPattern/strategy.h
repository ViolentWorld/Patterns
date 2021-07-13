#ifndef STRATEGY_H
#define STRATEGY_H

#include <QString>
#include <QFile>
#include <QTextStream>

class Strategy
{
public:
    Strategy();
    virtual bool saveFile(QString text);
};

#endif // STRATEGY_H
