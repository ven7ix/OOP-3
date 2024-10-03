#pragma once

#include "Shape.h"
#include "Point.h"
#include <iostream>

class Rectangle : public Shape {
	Point _leftBottom;
	int _sideLenghtX;
	int _sideLenghtY;

public:
	Rectangle(Point leftBottom, int sideLenghtX, int sideLenghtY) : _leftBottom(leftBottom), _sideLenghtX(sideLenghtX), _sideLenghtY(sideLenghtY) {}
	~Rectangle() {
		std::cout << "Deconstructor for Rectangle was called\n";
	}

	void Relocate(Point moveVector);
	void ChangeScale(int scaleFactor);
	void PrintShape();

	
};