#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    // std::vector<int> *readings = new std::vector<int>(mSamples, 10); - Heap Allocation is Causing memory Leaks
    std::vector<int> readings(mSamples, 10); // Using Stack Allocation to Avoid Memory Leaks. 

    double result = std::accumulate( readings.begin(), readings.end(), 0.0 ) / readings.size(); // Replacing -> operator as object is stack allocated.
    return result;
}


