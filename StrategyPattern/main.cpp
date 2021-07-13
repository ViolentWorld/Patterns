#include "filemanager.h"
#include "csvstrategy.h"
#include "txtstrategy.h"

#include <QCoreApplication>
#include <QScopedPointer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream cout(stdout);
    QTextStream cin(stdin);
    FileManager manager;
    QString message;
    QString format;

    cout << "Enter your text: " << endl;
    message = cin.readLine();
    cout << "Enter need format (csv/txt) or skip to save as html" << endl;
    cin >> format;

    if(format == "csv")
        manager.setStrategy(new CsvStrategy());
    else if(format == "txt")
        manager.setStrategy(new TxtStrategy());
    else
        manager.setStrategy(new Strategy());

    manager.saveFileWithFormat(message);

    return a.exec();
}
