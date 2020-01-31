#include <iostream>
#include <cmath>
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

Rectangle::Rectangle() : Shape2D() {
	_area = calculate_area();
	_perimeter = calculate_perimeter();
}

Rectangle::Rectangle(double length, double width) : Shape2D(length, width) {
	_area = calculate_area();
	_perimeter = calculate_perimeter();
}

Rectangle::Rectangle(const Rectangle &rect) : Shape2D(rect._length, rect._width) {
	_area = rect._area;
	_perimeter = rect._perimeter;
}

double Rectangle::area() const {
	return _area;
}

double Rectangle::perimeter() const {
	return _perimeter;
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

Triangle::Triangle() : Shape2D() {
	_area = calculate_area();
	_perimeter = calculate_perimeter();
}

Triangle::Triangle(double length, double width) : Shape2D(length, width) {
	_area = calculate_area();
	_perimeter = calculate_perimeter();
}

Triangle::Triangle(const Triangle &tri) : Shape2D(tri._length, tri._width) {
	_area = tri._area;
	_perimeter = tri._perimeter;
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

std::ostream &operator<<(std::ostream &out, Triangle &tri) {
	out << tri._length << " " << tri._width << " ";
	std::cout << tri._area << " " << tri._perimeter << " ";
	return out;
}
