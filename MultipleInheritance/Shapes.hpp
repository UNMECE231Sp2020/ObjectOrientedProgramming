#include <iostream>

//Base classes
class Shape2D {
	protected:
		double _length;
		double _width;

	public:
		Shape2D();
		Shape2D(double length, double width);
		Shape2D(const Shape2D &shape);

		virtual ~Shape2D();
		double length() const;
		double width() const;

		virtual double calculate_area();
		virtual double calculate_perimeter();
		virtual void print();

		friend std::ostream &operator<<(std::ostream &out, Shape2D &shape);
};

class Shape3D {
	protected:
		double _depth;
	public:
		Shape3D();
		Shape3D(double depth);

		virtual ~Shape3D();

		virtual double depth() const;
};

class Rectangle : public Shape2D {
	protected:
		double _area;
		double _perimeter;
	public:
		Rectangle();
		Rectangle(double length, double width);
		Rectangle(const Rectangle &rect);

		double area() const;
		double perimeter() const;

		void print();

		friend std::ostream &operator<<(std::ostream &out, Rectangle &rect);
};

class Cube : public Rectangle, public Shape3D {
	private:
		double _surface_area;
		double _volume;
	public:
		Cube();
		Cube(double length, double width, double depth);
		Cube(const Cube &cube);

		double surface_area() const;
		double volume() const;

		double calculate_surface_area();
		double calculate_volume();

		friend std::ostream &operator<<(std::ostream &out, Cube &cube);
		friend std::istream &operator>>(std::istream &in, Cube &cube);
};
