#ifndef RELATIVEPOSITION_H
#define RELATIVEPOSITION_H

#include"point.h"

// �ж����ֵ��������������ֵС��eps����Ϊ0��
int getSign(double x);

// �жϵ�Q�Ƿ�λ��P1��P2���߶���
bool getIsOnLine(Point& P1, Point& P2, Point& Q);

#endif // !RELATIVEPOSITION_H
