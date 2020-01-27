#include <iostream>
#include "Shapes.hpp"

Rectangle::Rectangle() {
	_length = 0;
	_width = 0;
	_area = calculate_area();
	_perimeter = calculate_perimeter();
}

Rectangle::Rectangle(double length, double width) {
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

Rectangle::Rectangle(const Rectangle &rect) {
	_length = rect._length;
	_width = rect._width;
	_area = rect._area;
	_perimeter = rect._perimeter;
}

Rectangle::~Rectangle() {

}

double Rectangle::length() const {
	return _length;
}

double Rectangle::width() const {
	return _width;
}

double Rectangle::area() const {
	return _area;
}

double Rectangle::perimeter() const {
	return _perimeter;
}

double Rectangle::calculate_area() {
	return _length * _width;
}

double Rectangle::calculate_perimeter() {
	return (2 * (_length + _width));
}

void Rectangle::print() {
	std::cout << _length << " " << _width << " ";
	std::cout << _area << " " << _perimeter << " ";
	std::cout << std::endl;
};

std::ostream &operator<<(std::ostream &out, Rectangle &Rect) {
	out << Rect._length << " " << Rect._width << " ";
	std::cout << Rect._area << " " << Rect._perimeter << " ";
	return out;
}
