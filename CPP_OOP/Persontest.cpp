#include <cstdio>
#include <cstring>
class Person
{
public:
    char name[100] = "";
    void setName(char newName[])
    {
        strcpy(name, newName);
    }
    char *getName()
    {
        return name;
    }
};

class TestPerson
{
    void test()
    {
        Person p;
        char name[] = "Samarth \n";
        p.getName 
    }
}