#include <iostream>
class Shape
{
public:
    virtual void display()
    {
        printf("This is a Shape class \n");
    }

    virtual void area()
    {
    }
};
class Circle : public Shape
{
public:
    void display() override
    {
        printf("This is Circle  \n");
    }

    void area() override
    {
        printf("area of circle = %lf\n", 3.14 * 4 * 4);
    }
};
class Triangle : public Shape
{
public:
    void display() override
    {
        printf("This is Triangle  \n");
    }
    void area() override
    {
        printf("area of triangle: %f \n", 0.5 * 4 * 5);
    }
};
class Square : public Shape
{
public:
    void display() override
    {
        printf("This is Square\n");
    }
    void area()
    {
        printf("area of square is: %d \n", 5 * 5);
    }
};

int main()
{
    Circle c;
    Triangle t;
    Square s;
    c.display();
    t.display();
    s.display();

    c.area();
    t.area();
    s.area();
    return 0;
}