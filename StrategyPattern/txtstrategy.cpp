#include "txtstrategy.h"

TxtStrategy::TxtStrategy()
{

}

bool TxtStrategy::saveFile(QString text)
{
    QString filePath = "file.txt";

    text += '\n';

    QFile file(filePath);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
         return false;

    QTextStream toWrite(&file);
    toWrite.setCodec("UTF-8");
    toWrite << text.toUtf8();
    file.close();
    return true;
}
