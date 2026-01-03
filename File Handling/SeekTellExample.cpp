// File Handling: seekg, tellg example
#include <iostream>
#include <fstream>

int main()
{
    const char *fname = "seek_sample.txt";
    std::ofstream ofs(fname);
    ofs << "0123456789\n";
    ofs.close();

    std::ifstream ifs(fname, std::ios::binary);
    ifs.seekg(3);
    std::cout << "pos after seekg(3): " << ifs.tellg() << '\n';
    char c;
    ifs.get(c);
    std::cout << "char at pos 3: " << c << '\n';
    return 0;
}
