#pragma once

#include "Point.h"
#include <iostream>

class Shape {
public:
	virtual void Relocate(Point moveVector) = 0;
	virtual void ChangeScale(int scaleFactor) = 0;
	virtual void PrintShape() = 0;
	virtual ~Shape() {}
};