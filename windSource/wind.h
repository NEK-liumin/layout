#ifndef WIND_H
#define WIND_H

#include "matrixOperation.h"

class Wind
{
public:
	int uStep, thetaStep;
	Column u;
	Column theta;
	Matrix p;
};

#endif // !WIND_H
