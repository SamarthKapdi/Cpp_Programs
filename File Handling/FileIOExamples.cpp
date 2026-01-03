// Module 9: File handling - basic read/write
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const char *fname = "sample_output.txt";
    std::ofstream ofs(fname);
    if (!ofs)
        return 1;
    ofs << "Line 1\nLine 2\n";
    ofs.close();

    std::ifstream ifs(fname);
    std::string line;
    while (std::getline(ifs, line))
        std::cout << line << '\n';
    return 0;
}
