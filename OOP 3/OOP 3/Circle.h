#pragma once

#include "Shape.h"
#include "Point.h"
#include <iostream>

class Circle : public Shape {
	Point _center;
	int _radius;

public:
	Circle(Point center, int radius) : _center(center), _radius(radius) {}
	~Circle() {
		std::cout << "Deconstructor for Circle was called\n";
	}

	void Relocate(Point moveVector);
	void ChangeScale(int scaleFactor);
	void PrintShape();
};