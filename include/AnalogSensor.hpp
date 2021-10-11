#pragma once

#include <iostream>

class AnalogSensor
{
public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    double Read();
private:
    unsigned int mSamples;
};
