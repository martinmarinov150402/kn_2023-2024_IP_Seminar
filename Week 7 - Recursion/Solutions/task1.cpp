#include <iostream>

void convertToBin(int num)
{
    if(num == 0) return;
    convertToBin(num / 2);
    std::cout << num % 2;
}
int main()
{
    int n;
    std::cin >> n;
    convertToBin(n);
}