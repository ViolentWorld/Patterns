#ifndef TXTSTRATEGY_H
#define TXTSTRATEGY_H

#include "strategy.h"

#include <QString>

class TxtStrategy : public Strategy
{
public:
    TxtStrategy();
    bool saveFile(QString text) override;
};

#endif // TXTSTRATEGY_H
