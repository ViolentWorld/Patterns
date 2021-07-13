#include "fahrenheitadapter.h"

FahrenheitAdapter::FahrenheitAdapter(CelsiusSensor *sensor) :
    c_sensor(sensor)
{

}

float FahrenheitAdapter::getTemperature()
{
    return ( c_sensor->getCelsiusTemp() * 9 ) / 5 + 32;
}
