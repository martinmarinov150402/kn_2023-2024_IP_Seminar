#include <iostream>
#include <cstring>


bool leq(char n1[], char n2[])
{
    return (strlen(n1) < strlen(n2)) || ((strlen(n1) == strlen(n2)) && strcmp(n1, n2) <= 0);
}
int main()
{
    std::cout << leq("558", "548");
}