#include "polygon.h"
#include "relativePosition.h"

Polygon::Polygon(int nVertex)
{
	if (nVertex <= 0)
	{
		this->nVertex = 0;
	}
	else
	{
		this->nVertex = nVertex;
		vertex.resize(nVertex);
	}
}

bool Polygon::getIsInShape(Point& P)
{
	bool flag = false;
	Point P1, P2;
	for (int i = 0, j = nVertex - 1; i < nVertex; j = i++)
	{
		P1 = vertex[i];
		P2 = vertex[j];
		if (getIsOnLine(P1, P2, P))return true;
		if ((getSign(P1.y - P.y) > 0 != getSign(P2.y - P.y) > 0) && getSign(P.x - (P.y - P1.y) * (P1.x - P2.x) / (P1.y - P2.y) - P1.x) < 0)
		{
			flag = !flag;
		}
	}
	return flag;
}