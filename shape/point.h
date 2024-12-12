#ifndef POINT_H
#define POINT_H

class Point
{
public:
	double x, y;
	Point() : x(0.0), y(0.0) {}
	Point(double x, double y) : x(x), y(y) {}
	int reset(double x, double y);
	// 向量加
	Point operator +(const Point& other)const;
	// 向量减
	Point operator -(const Point& other)const;
	// 点积
	double operator *(const Point& other)const;
	// 叉积
	double operator ^(const Point& other)const;
};

#endif // !POINT_H
