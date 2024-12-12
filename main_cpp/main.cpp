# include "matrixOperation.h"
#include <iostream>
#include "polygon.h"
#include "circle.h"
#include "region.h"
using std::cout;
using std::endl;

int main()
{
	Polygon polygon = Polygon(4);

	polygon.vertex[0].reset(0, 0);
	polygon.vertex[1].reset(100, 0);
	polygon.vertex[2].reset(100, 100);
	polygon.vertex[3].reset(0, 100);
	//polygon.vertex[4].reset(0, 100);
	//polygon.vertex[5].reset(-50, 50);

	Circle circle(100, 50, 50);

	Region region(2);
	region.shape[0] = &polygon;
	region.shape[1] = &circle;

	Point P(151, 50);

	region.getIsInRegion(P);

	cout << region.getIsInRegion(P) << endl;
	return 0;
}