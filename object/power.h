#ifndef POWER_H
#define POWER_H

class Power :public Object
{
public:
	int setGoal();
	int getGoal(double& goal);
};

#endif // !POWER_H
