#include <iostream>

void generate(int n, int pos, int pin[])
{
    if(pos >= n)
    {
        for(int i = 0; i < n; i++) std::cout << pin[i];
        std::cout << std::endl;
        return;
    }
    for(int i = 0; i <= 9; i++)
    {
        pin[pos] = i;
        generate(n, pos + 1, pin);
    }

}
int main()
{
    int n;
    std::cin >> n;
    int *pin = new int[n];
    generate(n, 0, pin);
    delete[] pin;
}