#include "csvstrategy.h"

CsvStrategy::CsvStrategy()
{

}

bool CsvStrategy::saveFile(QString text)
{
    QString filePath = "file.csv";

    text = text.simplified();
    text = text.replace(' ', ';');
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
