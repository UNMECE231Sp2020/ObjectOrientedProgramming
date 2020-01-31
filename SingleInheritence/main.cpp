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

	Triangle triangle(4, 6);

	std::cout << triangle << std::endl;
	std::cout << triangle.calculate_area() << std::endl;

	std::cout << triangle.Shape2D::calculate_area() << std::endl;

	Triangle tri2(triangle);
	std::cout << tri2 << std::endl;

	return 0;
}
