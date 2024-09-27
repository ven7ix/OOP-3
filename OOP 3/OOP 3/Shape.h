#pragma once

#include "Point.h"

class Shape {
public:
	virtual void Relocate(Point moveVector) = 0;
	virtual void ChangeScale(int scaleFactor) = 0;
	virtual void PrintShape() = 0;
};