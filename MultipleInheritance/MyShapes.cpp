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

Shape3D::Shape3D() {
	_depth = 0.0;
}

Shape3D::Shape3D(double depth) {
	if(depth >= 0.0) {
		_depth = depth;
	}
	else {
		_depth = 0.0;
	}
}

Shape3D::~Shape3D() {

}

/*
double Shape3D::depth() const {
	return _depth;
}
*/

Cube::Cube() : Rectangle(), Shape3D() {
	_surface_area = calculate_surface_area();
	_volume = calculate_volume();
}

Cube::Cube(double length, double width, double depth) : Rectangle(length, width), Shape3D(depth) {
	_surface_area = calculate_surface_area();
	_volume = calculate_volume();
}

Cube::Cube(const Cube &cube) : Rectangle(cube._length, cube._width), Shape3D(cube._depth) {
	_surface_area = calculate_surface_area();
	_volume = calculate_volume();
}

double Cube::depth() const {
	return _depth;
}

double Cube::surface_area() const {
	return _surface_area;
}

double Cube::volume() const {
	return _volume;
}

double Cube::calculate_surface_area() {
	return 6 * calculate_area();
}

double Cube::calculate_volume() {
	return _depth * calculate_area();
}

std::ostream &operator<<(std::ostream &out, Cube &cube) {
	out << cube._length << " " << cube._width << " " << cube._depth;
	return out;
}

std::istream &operator>>(std::istream &in, Cube &cube) {
	in >> cube._length >> cube._width >> cube._depth;
	return in;
}
