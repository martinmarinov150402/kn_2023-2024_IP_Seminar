#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    for(int i = a + a%2; i <= b - b%2 ; i += 2)
    {
        std::cout << i << " ";
    }
}