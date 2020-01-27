#include <iostream>
#include "Shapes.hpp"
#include <cmath>

Triangle::Triangle() {
	_length = 0;
	_width = 0;
	_area = calculate_area();
	_perimeter = calculate_perimeter();
}

Triangle::Triangle(double length, double width) {
	if(length < 0.0) {
		_length= 0.0;
	}
	else {
		_length = length;
	}

	if(width < 0.0) {
		_width = 0.0;
	}
	else {
		_width = width;
	}

	_area = calculate_area();
	_perimeter = calculate_perimeter();
}

Triangle::Triangle(const Triangle &tri) {
	_length = tri._length;
	_width = tri._width;
	_area = tri._area;
	_perimeter = tri._perimeter;
}

Triangle::~Triangle() {

}

double Triangle::length() const {
	return _length;
}

double Triangle::width() const {
	return _width;
}

double Triangle::area() const {
	return _area;
}

double Triangle::perimeter() const {
	return _perimeter;
}

double Triangle::calculate_area() {
	return (1/2.0) * (_length * _width);
}

double Triangle::calculate_perimeter() {
	double hypotenuse = ((1/2)*_width)*((1/2)*_width) + (_length*_length);
	hypotenuse = sqrt(hypotenuse);

	return _width + (2 * hypotenuse);
}

void Triangle::print() {
	std::cout << _length << " " << _width << " ";
	std::cout << _area << " " << _perimeter << " ";
	std::cout << std::endl;
};

std::ostream &operator<<(std::ostream &out, Triangle &Tri) {
	out << Tri._length << " " << Tri._width << " ";
	std::cout << Tri._area << " " << Tri._perimeter << " ";
	return out;
}
