#include <iostream>
#include "Shapes.hpp"

Shape2D::Shape2D() {
	_length = 0.0;
	_width = 0.0;
}

Shape2D::Shape2D(double length, double width) {
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
}

Shape2D::Shape2D(const Shape2D &shape) {
	_length = shape._length;
	_width = shape._width;
}

Shape2D::~Shape2D() {

}

double Shape2D::length() const {
	return _length;
}

double Shape2D::width() const {
	return _width;
}

double Shape2D::calculate_area() {
	return _length * _width;
}

double Shape2D::calculate_perimeter() {
	return (2 * (_length + _width));
}

void Shape2D::print() {
	std::cout << _length << " " << _width << " ";
	std::cout << std::endl;
}

std::ostream &operator<<(std::ostream &out, Shape2D &shape) {
	out << shape._length << " " << shape._width << " ";
	return out;
}
