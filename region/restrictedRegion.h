#ifndef RESTRICTEDREGION_H
#define RESTRICTEDREGION_H

#include "region.h"

class RestrictedRegion :public Region
{
public:
	RestrictedRegion() { nShape = 0; shape.resize(0); }
};

#endif // !RESTRICTEDREGION_H
