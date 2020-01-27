#include <iostream>

class Shape2D {
	private:
		double _length;
		double _width;
	public:
		Shape2D();
		Shape2D(double length, double width);
		Shape2D(const Shape2D &shape);

		~Shape2D();
		double length() const;
		double width() const;

		double calculate_area();
		double calculate_perimeter();
		void print();

		friend std::ostream &operator<<(std::ostream &out, Shape2D &shape);
};

class Rectangle {
	private:
		double _length;
		double _width;
		double _area;
		double _perimeter;
	public:
		Rectangle();
		Rectangle(double length, double width);
		Rectangle(const Rectangle &rect);

		~Rectangle();

		double length() const;
		double width() const;
		double area() const;
		double perimeter() const;

		double calculate_area();
		double calculate_perimeter();

		void print();

		friend std::ostream &operator<<(std::ostream &out, Rectangle &rect);
};

class Triangle {
	private:
		double _length;
		double _width;
		double _area;
		double _perimeter;
	public:
		Triangle();
		Triangle(double length, double width);
		Triangle(const Triangle &tri);

		~Triangle();

		double length() const;
		double width() const;
		double area() const;
		double perimeter() const;

		double calculate_area();
		double calculate_perimeter();

		void print();

		friend std::ostream &operator<<(std::ostream &out, Triangle &tri);
};
