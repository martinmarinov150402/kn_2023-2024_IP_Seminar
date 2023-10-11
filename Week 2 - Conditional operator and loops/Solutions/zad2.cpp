#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int f = 1;
    int i = 1;
    while(f < x)
    {
        f *= i;
        i++;
    }
    if(f == x)
    {
        std::cout << "Da";
    }
    else
    {
        std::cout << "Ne";
    }

}