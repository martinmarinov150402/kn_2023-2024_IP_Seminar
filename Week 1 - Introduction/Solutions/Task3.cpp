#include <iostream>

int main()
{
    short year;
    std::cin >> year;

    bool v = (year % 100 == 0 && year % 400 == 0) ||
             (year % 100 != 0 && year % 4 == 0);

    std::cout << std::boolalpha << v << std::endl;
}