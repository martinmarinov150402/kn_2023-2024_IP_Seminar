#include <iostream>
#include <cmath>

int main()
{
    double a = 0.333333333333333;
    double b = 1.0 / 3.0;
    const double epsilon = 0.0000000001;

    std::cout << std::boolalpha << (a == b) << std::endl; 

    if(a < b + epsilon && a > b - epsilon)
    {
        std::cout << "Ravni sa";
    }
    else
    {
        std::cout << "Ne sa ravni!";
    }
    std::cout << std::endl;
}