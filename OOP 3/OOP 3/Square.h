#pragma once

#include "Shape.h"
#include "Point.h"

class Square : public Shape {
	Point _leftBottom;
	int _sideLenght;

public:
	Square(Point leftBottom, int sideLenght) : _leftBottom(leftBottom), _sideLenght(sideLenght) {}

	void Relocate(Point moveVector);
	void ChangeScale(int scaleFactor);
	void PrintShape();
};