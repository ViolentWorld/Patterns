#ifndef SENSOR_H
#define SENSOR_H


class Sensor
{
public:
    Sensor();
    virtual float getTemperature();
    void DoSomethingWithTemperature();
    virtual ~Sensor();
};

#endif // SENSOR_H
