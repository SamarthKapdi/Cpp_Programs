// Basics: Input / Output examples
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";

    int a;
    std::cout << "Enter an integer: ";
    if (std::cin >> a)
    {
        std::cout << "You entered: " << a << '\n';
    }
    return 0;
}
