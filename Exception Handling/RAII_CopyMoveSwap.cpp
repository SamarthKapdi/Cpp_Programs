// RAII with copy/move and safe-swap example
#include <iostream>
#include <utility>

class Resource
{
    int *data;
    size_t sz;

public:
    Resource(size_t n = 0) : data(n ? new int[n] : nullptr), sz(n) { std::cout << "Resource ctor(" << sz << ")\n"; }
    ~Resource()
    {
        delete[] data;
        std::cout << "Resource dtor(" << sz << ")\n";
    }
    // copy
    Resource(const Resource &other) : data(other.sz ? new int[other.sz] : nullptr), sz(other.sz)
    {
        if (data)
            std::copy(other.data, other.data + sz, data);
        std::cout << "Resource copy(" << sz << ")\n";
    }
    // move
    Resource(Resource &&other) noexcept : data(other.data), sz(other.sz)
    {
        other.data = nullptr;
        other.sz = 0;
        std::cout << "Resource move(" << sz << ")\n";
    }
    Resource &operator=(Resource other)
    { // copy-and-swap
        swap(*this, other);
        std::cout << "Resource copy-assign/swap\n";
        return *this;
    }
    friend void swap(Resource &a, Resource &b) noexcept
    {
        using std::swap;
        swap(a.data, b.data);
        swap(a.sz, b.sz);
    }
};

int main()
{
    Resource r1(5);
    Resource r2 = r1;            // copy
    Resource r3 = std::move(r1); // move
    r2 = Resource(3);            // move-assign via copy-and-swap
    std::cout << "end main\n";
}
