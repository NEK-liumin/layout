#include "point.h"

int Point::reset(double x, double y)
{
	this->x = x;
	this->y = y;
	return 0;
}

Point Point::operator +(const Point& other)const
{
	return Point(x + other.x, y + other.y);
}

Point Point::operator -(const Point& other)const
{
	return Point(x - other.x, y - other.y);
}

double Point::operator *(const Point& other)const
{
	return x * other.x + y * other.y;
}

double Point::operator ^(const Point& other)const
{
	return x * other.y - y * other.x;
}