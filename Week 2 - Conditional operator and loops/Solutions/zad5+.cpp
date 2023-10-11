#include <iostream>

int main()
{
    int year;
    int counter = 0;
    while(std::cin >> year)
    {
        if((year % 100 == 0 && year % 400 == 0)|| 
           (year % 100 != 0 && year % 4 == 0))
        {
            counter ++;            
        }
    }
    std::cout << counter << std::endl;
}