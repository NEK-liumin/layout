#include "relativePosition.h"
#include <math.h>
const double eps = 1e-6;
int getSign(double x)
{
	if (fabs(x) < eps)
	{
		return 0;
	}
	else if (x < 0)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

bool getIsOnLine(Point& P1, Point& P2, Point& Q)
{
	if (getSign((P1 - Q) ^ (P2 - Q)) == 0 && getSign((P1 - Q) * (P2 - Q)) <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
