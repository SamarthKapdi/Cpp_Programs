#include <cstdio>
#include <cstring>
// create person class
class Person
{
    // create name attribute
    char name[100] = "";

public:
    // create setName() function
    void setName(char newName[])
    {
        strcpy(name, newName);
    }
    // create getName() function
    char *getName()

    {
        return name;
    }
};

// create TestPerson class
class TestPerson
{
public:
    void test()
    {
        // create object of Person class
        Person p;
        char name[] = "samarth \n";
        p.setName(name);
        printf("name : %s", p.getName());

        char name1[] = "pranav";
        p.setName(name1);
        printf("name : %s", p.getName());
    }
};
// calling main method
int main()
{
    TestPerson tp;
    tp.test();
}
