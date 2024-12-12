#include "circle.h"

Circle::Circle(double Ox, double Oy, double r)
{
	this->O.x = Ox;
	this->O.y = Oy;
	this->r = r;
}

int Circle::reset(double Ox, double Oy, double r)
{
	this->O.x = Ox;
	this->O.y = Oy;
	this->r = r;
	return 0;
}

bool Circle::getIsInShape(Point& P)
{
	double dis = (P.x - O.x) * (P.x - O.x) + (P.y - O.y) * (P.y - O.y);
	if (dis <= r * r)
	{
		return true;
	}
	else
	{
		return false;
	}
}