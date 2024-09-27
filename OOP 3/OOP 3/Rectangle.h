#pragma once

#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape {
	Point _leftBottom;
	int _sideLenghtX;
	int _sideLenghtY;

public:
	Rectangle(Point leftBottom, int sideLenghtX, int sideLenghtY) : _leftBottom(leftBottom), _sideLenghtX(sideLenghtX), _sideLenghtY(sideLenghtY) {}

	void Relocate(Point moveVector);
	void ChangeScale(int scaleFactor);
	void PrintShape();
};