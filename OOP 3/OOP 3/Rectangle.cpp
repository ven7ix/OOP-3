#include "Rectangle.h"
#include "Point.h"
#include <iostream>

void Rectangle::Relocate(Point moveVector) {
	_leftBottom._x += moveVector._x;
	_leftBottom._y += moveVector._y;
}

void Rectangle::ChangeScale(int scaleFactor) {
	_sideLenghtX *= scaleFactor;
	_sideLenghtY *= scaleFactor;
}

void Rectangle::PrintShape() {
	std::cout << "Left Bottom Point: " << _leftBottom._x << ", " << _leftBottom._y << " Side Lenght X: " << _sideLenghtX << " Side Lenght Y: " << _sideLenghtY << "\n";
}
