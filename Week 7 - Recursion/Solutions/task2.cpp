#include <iostream>

void printReversed()
{
    char sym;
    std::cin >> sym;
    if(sym == 'Z')
    {
        std::cout << 'Z';
        return;
    }
    printReversed();
    std::cout << sym;
}
int main()
{
    printReversed();
}