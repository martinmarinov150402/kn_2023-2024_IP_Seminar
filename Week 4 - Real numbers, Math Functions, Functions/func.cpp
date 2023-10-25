#include <iostream>

int a;
void change()
{
    a = 5;
    std::cout << "A in function is: " << a << std::endl;
}
int main()
{
    
    change();
    std::cout << "A in main is: " << a << std::endl;
}   
