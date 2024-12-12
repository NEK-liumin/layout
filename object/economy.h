#ifndef ECONOMY_H
#define ECONOMY_H

#include "object.h"

class Economy :public Object
{
public:
	int setGoal();
	int getGoal(double& goal);
};

#endif // !ECONOMY_H
