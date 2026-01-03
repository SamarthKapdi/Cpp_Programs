// Runtime Polymorphism
#include <cstdio>
class Shape
{
public:
    virtual void display()
    {
        printf("This is a shape \n");
    }
    virtual void area()
    {
        printf("This is area \n");
    }
};
class Circle : public Shape

{
public:
    void display() override
    {
        printf("this is circle\n");
    }
    void area() override
    {
        printf("Area of circle: %lf\n", 3.14 * 5 * 5);
    }
};
class Triangle : public Shape
{
public:
    void display() override
    {
        printf("this is triangle\n");
    }
    void area() override
    {
        printf("Area pf triangle: %lf\n", .5 * 10 * 10);
    }
};
class Square : public Shape
{
public:
    void display() override
    {
        printf("this is square \n");
    }
    void area() override
    {
        printf("Area of square: %d \n", 25 * 25);
    }
};

int main()
{
    Shape *s1 = new Circle;
    Shape *s2 = new Triangle;
    Shape *s3 = new Square;
    s1->display();
    s2->display();
    s3->display();
    s1->area();
    s2->area();
    s3->area();
    return 0;
}