// OOP: constructors, copy constructor, destructor
#include <iostream>
#include <cstring>

class Buffer
{
public:
    Buffer(const char *s = "")
    {
        len = std::strlen(s);
        data = new char[len + 1];
        std::strcpy(data, s);
        std::cout << "ctor\n";
    }
    Buffer(const Buffer &other)
    {
        len = other.len;
        data = new char[len + 1];
        std::strcpy(data, other.data);
        std::cout << "copy ctor\n";
    }
    ~Buffer()
    {
        delete[] data;
        std::cout << "dtor\n";
    }
    const char *get() const { return data; }

private:
    char *data;
    size_t len;
};

int main()
{
    Buffer b1("hello");
    Buffer b2 = b1; // copy constructor
    std::cout << b2.get() << '\n';
    return 0;
}
