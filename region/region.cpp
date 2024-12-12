#include "region.h"

Region::Region(int nShape)
{
	if (nShape <= 0)
	{
		this->nShape = 0;
		shape.resize(0);
	}
	else
	{
		this->nShape = nShape;
		shape.resize(nShape);
		for (int i = 0; i < nShape; ++i)shape[i] = nullptr;
	}
}

int Region::reset(int nShape)
{
	if (nShape <= 0)
	{
		this->nShape = 0;
		shape.resize(0);
	}
	else
	{
		this->nShape = nShape;
		shape.resize(nShape);
		for (int i = 0; i < nShape; ++i)shape[i] = nullptr;
	}
	return 0;
}

bool Region::getIsInRegion(Point& P)
{
	for (int i = 0; i < nShape; ++i)
	{
		if (shape[i]->getIsInShape(P)) return true;
	}
	return false;
}