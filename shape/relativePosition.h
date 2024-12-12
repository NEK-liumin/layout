#ifndef RELATIVEPOSITION_H
#define RELATIVEPOSITION_H

#include"point.h"

// 判断数字的正负。如果绝对值小于eps，则为0。
int getSign(double x);

// 判断点Q是否位于P1和P2的线段上
bool getIsOnLine(Point& P1, Point& P2, Point& Q);

#endif // !RELATIVEPOSITION_H
