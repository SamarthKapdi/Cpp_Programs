#include <cstdio>
class Shape
{
public:
    void display()
    {
        printf("I am a shape class \n");
    }
};
class Circle : public Shape
{
};
class Triangle : public Shape
{
};
class Rectangle : public Shape
{
};

int main()
{
    Circle c;
    Triangle t;
    Rectangle r;

    c.display();
    t.display();
    r.display();
}