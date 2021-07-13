#include "filemanager.h"

FileManager::FileManager()
{

}

void FileManager::setStrategy(Strategy* strategy)
{
    _strategy.reset(strategy);
}

void FileManager::saveFileWithFormat(QString text)
{
    QTextStream cout(stdout);

    if(!_strategy->saveFile(text))
        cout << endl << "File was not saved!" << endl;
    else
        cout << endl << "Success!" << endl;
}
