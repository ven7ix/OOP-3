#pragma once

#include "Shape.h"
#include "Point.h"
#include <iostream>

class Square : public Shape {
	Point _leftBottom;
	int _sideLenght;

public:
	Square(Point leftBottom, int sideLenght) : _leftBottom(leftBottom), _sideLenght(sideLenght) {}
	~Square() {
		std::cout << "Deconstructor for Square was called\n";
	}

	void Relocate(Point moveVector);
	void ChangeScale(int scaleFactor);
	void PrintShape();
};