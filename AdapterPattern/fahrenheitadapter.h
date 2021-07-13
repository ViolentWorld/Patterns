#ifndef FAHRENHEITADAPTER_H
#define FAHRENHEITADAPTER_H

#include "sensor.h"
#include "celsiussensor.h"

class FahrenheitAdapter : public Sensor
{
public:
    FahrenheitAdapter(CelsiusSensor* sensor);
    float getTemperature() override;

private:
    CelsiusSensor* c_sensor;
};

#endif // FAHRENHEITADAPTER_H
