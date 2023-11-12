#include <iostream>
#include <cstring>

int main()
{
    char str1[101];
    strcpy(str1, "Zdravei ");
    char name[21];
    char str2[] = "! Radvam se che ispolzvash moeto prilojenie";
    std::cin >> name;
    strcat(str1, name);
    strcat(str1, str2);
    std::cout << str1 << std::endl;
}