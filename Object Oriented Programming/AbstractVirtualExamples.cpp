// OOP: abstract classes and virtual functions
#include <iostream>

struct Shape
{
    virtual double area() const = 0; // pure virtual
    virtual ~Shape() = default;
};

struct Circle : Shape
{
    double r;
    Circle(double rr) : r(rr) {}
    double area() const override { return 3.14159 * r * r; }
};

int main()
{
    Shape *s = new Circle(2.0);
    std::cout << "area: " << s->area() << '\n';
    delete s;
    return 0;
}
