#ifndef CSVSTRATEGY_H
#define CSVSTRATEGY_H

#include "strategy.h"

#include <QString>

class CsvStrategy : public Strategy
{
public:
    CsvStrategy();
    bool saveFile(QString text) override;
};

#endif // CSVSTRATEGY_H
