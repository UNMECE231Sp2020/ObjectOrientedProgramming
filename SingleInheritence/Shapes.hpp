#include <iostream>

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

class Rectangle : public Shape2D {
	private:
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

class Triangle : public Shape2D {
	private:
		double _area;
		double _perimeter;
	public:
		Triangle();
		Triangle(double length, double width);
		Triangle(const Triangle &tri);

		double area() const;
		double perimeter() const;

		double calculate_area();
		double calculate_perimeter();
		void print();

		friend std::ostream &operator<<(std::ostream &out, Triangle &tri);
};
