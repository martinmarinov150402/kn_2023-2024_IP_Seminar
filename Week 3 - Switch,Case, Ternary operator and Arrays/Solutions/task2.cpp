#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    char number[101];
    std::cin >> number;
    int c = 0;
    int stepen = 1;
    for(int i = n-1; i >= 0; i--)
    {
        c += (number[i] - '0') * stepen;
        stepen *= 2;
    }
    std::cout << c;
}