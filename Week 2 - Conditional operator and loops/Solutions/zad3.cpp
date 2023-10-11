#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    bool flag = true;
    while(a != 0 && flag)
    {
        if((a % 10) % 2 != 0)
        {
            flag = false;
        }
        a /= 10;      
    }
    std::cout << std::boolalpha << flag;
}