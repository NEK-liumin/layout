#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape
{
public:
	bool virtual getIsInShape(Point& P) { return true; }
};

#endif // !SHAPE_H
