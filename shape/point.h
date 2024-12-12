#ifndef POINT_H
#define POINT_H

class Point
{
public:
	double x, y;
	Point() : x(0.0), y(0.0) {}
	Point(double x, double y) : x(x), y(y) {}
	int reset(double x, double y);
	// ������
	Point operator +(const Point& other)const;
	// ������
	Point operator -(const Point& other)const;
	// ���
	double operator *(const Point& other)const;
	// ���
	double operator ^(const Point& other)const;
};

#endif // !POINT_H
