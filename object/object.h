#ifndef OBJECT_H
#define OBJECT_H


class Object
{
public:
	double goal;
	Object();
	int virtual setGoal();
	int virtual getGoal(double& goal);
};

#endif // !OBJECT_H
