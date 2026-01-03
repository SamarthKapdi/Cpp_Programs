// Compound Data Types: structs, unions, enums
#include <iostream>
#include <string>

struct Person
{
    std::string name;
    int age;
};
union U
{
    int i;
    float f;
};
enum Color
{
    Red,
    Green,
    Blue
};

int main()
{
    Person p{"Alice", 28};
    std::cout << p.name << " is " << p.age << " years old\n";
    U u;
    u.i = 42;
    std::cout << "union as int: " << u.i << '\n';
    Color c = Green;
    std::cout << "Color enum value: " << c << '\n';
    return 0;
}
