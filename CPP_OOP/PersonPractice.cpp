#include <cstdio>
#include <cstring>
class Person
{
    char name[100] = "";

public:
    void setName(char newName[])
    {
        strcpy(name, newName);
    }
    char *getName()
    {
        return name;
    }
};
int main()
{
    Person p;
    char name[100] = "Samarth";
    p.setName(name);
    printf("My name is : %s", p.getName());
}