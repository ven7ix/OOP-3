#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

int main() {
	Shape* shapes[3]{};

	shapes[0] = new Circle(Point(0, 0), 20);
	shapes[1] = new Square(Point(0, 0), 8);
	shapes[2] = new Rectangle(Point(0, 0), 8, 10);

	shapes[0]->PrintShape();
	shapes[1]->PrintShape();
	shapes[2]->PrintShape();

	shapes[0]->Relocate(Point(6, 10));
	shapes[1]->ChangeScale(8);
	shapes[2]->Relocate(Point(9, 5));
	shapes[2]->ChangeScale(3);

	shapes[0]->PrintShape();
	shapes[1]->PrintShape();
	shapes[2]->PrintShape();
}