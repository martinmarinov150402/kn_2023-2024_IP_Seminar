#include <iostream>
#include <cstdio>

struct Person
{
    char name[256];
    unsigned age;
    char city[256];
};

void hasAge(Person a)
{
    if(a.age >= 18)
    {  
        printf("Hey %s from %s. Welcome to the club\n", a.name, a.city);
    }
    else
    {
        printf("Hey %s go back to %s\n", a.name, a.city);
    }
}
int main()
{
    Person ivan = {"Ivan", 19, "Sofia"};
    Person goshu = {"Goshu", 10, "Smolyan"};
    hasAge(ivan);
    hasAge(goshu);
}