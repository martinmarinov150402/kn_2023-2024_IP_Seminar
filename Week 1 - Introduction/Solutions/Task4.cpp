#include <iostream>

int main()
{
    short n1, n2, n3, n4;
    short num;
    std::cin >> num;

    n1 = num % 10;
    num /= 10;
    n2 = num % 10;
    num /= 10;
    n3 = num % 10;
    num /= 10;
    n4 = num;
    
    short newNum = n1 * 1000 + n2 * 100 + n3 * 10 + n4;
    std::cout << newNum;
}