#ifndef CELSIUSSENSOR_H
#define CELSIUSSENSOR_H


class CelsiusSensor
{
public:
    CelsiusSensor();
    float getCelsiusTemp();

private:
    float temperature = 12.7;
};

#endif // CELSIUSSENSOR_H
