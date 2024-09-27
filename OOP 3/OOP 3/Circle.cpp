#include "Circle.h"
#include "Point.h"
#include <iostream>

void Circle::Relocate(Point moveVector) {
	_center._x += moveVector._x;
	_center._y += moveVector._y;
}
void Circle::ChangeScale(int scaleFactor) {
	_radius *= scaleFactor;
}
void Circle::PrintShape() {
	std::cout << "Center: " << _center._x << ", " << _center._y << " Radius: " << _radius << "\n";
}