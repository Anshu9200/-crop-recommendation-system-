#ifndef CROP_H
#define CROP_H

#include <string>

using namespace std;

string recommendCrop(float ph, float temperature, float rainfall,
                     float humidity, float moisture);

#endif
