#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "strategy.h"

#include <QDebug>
#include <memory>

class FileManager
{
public:
    FileManager();
    void setStrategy(Strategy* strategy);
    void saveFileWithFormat(QString text);

private:
    std::unique_ptr<Strategy> _strategy;
};

#endif // FILEMANAGER_H
