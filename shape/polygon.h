#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "matrixOperation.h"

class Polygon :public Shape
{
public:
	int nVertex;
	vector<Point> vertex;
	Polygon() { nVertex = 0; vertex.resize(0); }
	// nVertex±ßÐÎ
	Polygon(int nVertex);
	bool getIsInShape(Point& P);
};

#endif // !POLYGON_H
