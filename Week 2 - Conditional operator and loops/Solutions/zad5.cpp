#include <iostream>

int main()
{
    int n, count = 0;
    std::cin >> n;

    int year;
    for(int i = 0; i < n; i++)
    {
        std::cin >> year;
        if((year % 100 == 0 && year % 400 == 0)|| 
           (year % 100 != 0 && year % 4 == 0))
        {
            count ++;            
        }
    }

    std::cout << count << std::endl;
}