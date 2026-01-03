// Binary file I/O: write/read array of structs and demonstrate seek/tell
#include <fstream>
#include <iostream>
#include <string>

struct Person
{
    char name[32];
    int age;
    double salary;
};

void write_people(const char *path)
{
    Person arr[3] = {
        {"Alice", 30, 55000.0},
        {"Bob", 25, 42000.5},
        {"Carol", 28, 48000.75}};

    std::ofstream ofs(path, std::ios::binary);
    if (!ofs)
    {
        std::cerr << "failed open for write\n";
        return;
    }

    // write entire array
    ofs.write(reinterpret_cast<const char *>(arr), sizeof(arr));
    std::streampos end = ofs.tellp();
    std::cout << "Wrote " << end << " bytes to " << path << '\n';
}

void read_people(const char *path)
{
    std::ifstream ifs(path, std::ios::binary);
    if (!ifs)
    {
        std::cerr << "failed open for read\n";
        return;
    }

    // find file size
    ifs.seekg(0, std::ios::end);
    std::streampos size = ifs.tellg();
    std::cout << "File size: " << size << " bytes\n";

    // read one record at offset of second element
    ifs.seekg(sizeof(Person), std::ios::beg);
    Person p;
    ifs.read(reinterpret_cast<char *>(&p), sizeof(Person));
    std::cout << "Second person: " << p.name << ", age=" << p.age << ", salary=" << p.salary << '\n';

    // iterate all
    ifs.clear();
    ifs.seekg(0, std::ios::beg);
    while (ifs.read(reinterpret_cast<char *>(&p), sizeof(Person)))
    {
        std::cout << "Person: " << p.name << ", age=" << p.age << ", salary=" << p.salary << '\n';
    }
}

int main()
{
    const char *path = "people.bin";
    write_people(path);
    read_people(path);
    return 0;
}
