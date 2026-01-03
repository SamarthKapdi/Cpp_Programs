// OOP: operator overloading (binary +, unary ++)
#include <iostream>

class Counter
{
public:
    Counter(int v = 0) : val(v) {}
    Counter operator+(const Counter &o) const { return Counter(val + o.val); }
    Counter &operator++()
    {
        ++val;
        return *this;
    } // prefix
    int get() const { return val; }

private:
    int val;
};

int main()
{
    Counter a(2), b(3);
    Counter c = a + b;
    ++c;
    std::cout << "c=" << c.get() << '\n';
    return 0;
}
