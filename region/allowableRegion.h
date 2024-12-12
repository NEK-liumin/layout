#ifndef ALLOWABLEREGION_H
#define ALLOWABLEREGION_H

#include "region.h"

class AllowableRegion :public Region
{
public:
	AllowableRegion() { nShape = 0; shape.resize(0); }
};

#endif // !ALLOWALBEREGION_H
