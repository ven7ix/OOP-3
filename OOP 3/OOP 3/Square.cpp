#include "Square.h"
#include "Point.h"
#include <iostream>

void Square::Relocate(Point moveVector) {
	_leftBottom._x += moveVector._x;
	_leftBottom._y += moveVector._y;
}

void Square::ChangeScale(int scaleFactor) {
	_sideLenght *= scaleFactor;
}

void Square::PrintShape() {
	std::cout << "Left Bottom Point: " << _leftBottom._x << ", " << _leftBottom._y << " Side Lenght: " << _sideLenght << "\n";
}
