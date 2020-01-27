#include <iostream>
#include "Shapes.hpp"

int main() {
	Shape2D shape(5, 8);

	std::cout << shape << std::endl;

	shape.print();

	Rectangle rectangle(6, 7);
	std::cout << rectangle << std::endl;

	std::cout << "Area of rectangle: " << rectangle.calculate_area();
	std::cout << std::endl;

	rectangle.print();

	Triangle triangle(3, 8);
	triangle.print();

	return 0;
}
