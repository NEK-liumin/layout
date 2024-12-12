#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle :public Shape
{
public:
	Point O; // Center of a circle
	double r; // Radius of a circle
	Circle(double Ox, double Oy, double r);
	int reset(double Ox, double Oy, double r);
	bool getIsInShape(Point& P);
};

#endif // !CIRCLE_H
