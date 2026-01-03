// Move semantics and rvalue-reference examples
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

struct Buffer
{
    size_t size{0};
    int *data{nullptr};

    Buffer(size_t n = 0) : size(n), data(n ? new int[n] : nullptr)
    {
        std::cout << "ctor(size=" << size << ")\n";
    }

    ~Buffer()
    {
        delete[] data;
        std::cout << "dtor(size=" << size << ")\n";
    }

    // copy constructor (deep copy)
    Buffer(const Buffer &other) : size(other.size), data(other.size ? new int[other.size] : nullptr)
    {
        if (data)
            std::copy(other.data, other.data + size, data);
        std::cout << "copy ctor(size=" << size << ")\n";
    }

    // copy assignment
    Buffer &operator=(const Buffer &other)
    {
        if (this == &other)
            return *this;
        delete[] data;
        size = other.size;
        data = size ? new int[size] : nullptr;
        if (data)
            std::copy(other.data, other.data + size, data);
        std::cout << "copy assign(size=" << size << ")\n";
        return *this;
    }

    // move constructor
    Buffer(Buffer &&other) noexcept : size(other.size), data(other.data)
    {
        other.size = 0;
        other.data = nullptr;
        std::cout << "move ctor(size=" << size << ")\n";
    }

    // move assignment
    Buffer &operator=(Buffer &&other) noexcept
    {
        if (this == &other)
            return *this;
        delete[] data;
        size = other.size;
        data = other.data;
        other.size = 0;
        other.data = nullptr;
        std::cout << "move assign(size=" << size << ")\n";
        return *this;
    }
};

// factory that returns a Buffer (triggers move or NRVO)
Buffer make_buffer(size_t n)
{
    Buffer b(n);
    for (size_t i = 0; i < n; ++i)
        b.data[i] = int(i * 10);
    return b;
}

int main()
{
    std::cout << "-- make_buffer -> a\n";
    Buffer a = make_buffer(5); // move or elide

    std::cout << "-- copy construct b(a)\n";
    Buffer b(a); // copy

    std::cout << "-- move construct c(std::move(a))\n";
    Buffer c(std::move(a)); // move

    std::cout << "-- copy assign d = b\n";
    Buffer d;
    d = b; // copy assign

    std::cout << "-- move assign d = std::move(c)\n";
    d = std::move(c); // move assign

    std::cout << "-- vector push_back(make_buffer)\n";
    std::vector<Buffer> v;
    v.reserve(3);
    v.push_back(make_buffer(3)); // move
    v.push_back(Buffer(2));      // move from temporary
    v.emplace_back(4);           // construct in-place

    std::cout << "-- end main\n";
    return 0;
}
