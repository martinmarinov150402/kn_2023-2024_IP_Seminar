#include <iostream>
#include <cstring>

int main()
{
    char str[101];
    std::cin >> str;

    int suma = 0;
    int n = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            n = n * 10 + str[i] - '0';
        }
        else
        {
            suma += n;
            n = 0;
        }
    }
    suma += n;

    std::cout << suma;
}