// Exception Handling: user-defined exception example
#include <iostream>
#include <exception>

class MyError : public std::exception
{
public:
    MyError(const char *m) : msg(m) {}
    const char *what() const noexcept override { return msg; }

private:
    const char *msg;
};

int main()
{
    try
    {
        throw MyError("Something bad happened");
    }
    catch (const MyError &e)
    {
        std::cerr << "Caught MyError: " << e.what() << '\n';
    }
    return 0;
}
