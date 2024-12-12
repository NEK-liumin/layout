#ifndef REGION_H
#define REGION_H
#include "shape.h"
#include <vector>
using std::vector;

class Region
{
public:
	int nShape;
	vector<Shape*> shape;
	Region() { nShape = 0; shape.resize(0); }
	Region(int nShape);
	int reset(int nShape);
	bool getIsInRegion(Point& P);
};

#endif // !REGION_H
