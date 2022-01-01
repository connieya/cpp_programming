#ifndef _WEIGHT_H_
#define _WEIGHT_H_

#include "iostream"

using namespace std;

class Weight
{
public:
    void setHeight(const double h);
    void setWeight(const double h);
    double getHeight();
    double getWeight();
    int getWeightStatus();

private:
    int StdWeight();
    double height , weight;
    int WeightStatus;
};

#else
#endif