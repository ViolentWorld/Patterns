#include <QCoreApplication>
#include <QDebug>

#include "sensor.h"
#include "celsiussensor.h"
#include "fahrenheitadapter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CelsiusSensor cSensor;

    qDebug() << cSensor.getCelsiusTemp() << " - celsius temperature." << endl;

    Sensor* sensor = new FahrenheitAdapter(new CelsiusSensor);

    qDebug() << sensor->getTemperature() << " - fahrenheit temperature." << endl;

    return a.exec();
}
