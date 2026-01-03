// Basics: Identifiers and Keywords
// This file demonstrates valid identifiers and lists some C++ keywords (as comments).
#include <iostream>

int main()
{
    int valid_identifier = 10;
    int _underscore = 20;
    int camelCaseVar = 30;
    std::cout << valid_identifier + _underscore + camelCaseVar << '\n';

    // Some C++ keywords (cannot be used as identifiers):
    // int, double, return, if, else, for, while, class, struct, public, private, template, typename

    return 0;
}
