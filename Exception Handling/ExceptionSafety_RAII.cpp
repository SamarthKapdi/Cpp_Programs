// Exception Safety: RAII example using resource wrapper
#include <iostream>
#include <stdexcept>

struct FileHandle
{
    FILE *f;
    FileHandle(const char *name)
    {
        f = fopen(name, "w");
        if (!f)
            throw std::runtime_error("open failed");
    }
    ~FileHandle()
    {
        if (f)
            fclose(f);
    }
    void write(const char *s)
    {
        if (f)
            fputs(s, f);
    }
};

int main()
{
    try
    {
        FileHandle fh("raii.txt");
        fh.write("hello\n");
        throw std::runtime_error("boom");
    }
    catch (const std::exception &e)
    {
        std::cerr << "caught: " << e.what() << '\n';
    }
    // destructor of FileHandle ensures file closed even after exception
    return 0;
}
