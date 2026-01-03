// Module 5: OOP basics - class and object, constructor/destructor
#include <iostream>

class Rectangle
{
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() const { return width * height; }

private:
    int width;
    int height;
};

int main()
{
    Rectangle r(3, 4);
    std::cout << "Rectangle area = " << r.area() << '\n';
    return 0;
}
