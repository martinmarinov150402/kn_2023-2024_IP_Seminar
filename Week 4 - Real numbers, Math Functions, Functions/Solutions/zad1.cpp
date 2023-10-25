#include <iostream>

bool isPalindrome(int a)
{
    int aCopy = a;
    int aRev = 0;

    while(aCopy != 0)
    {
        aRev = aRev * 10 + aCopy % 10;
        aCopy /= 10;
    }
    
    return (a == aRev);
}
int main()
{
    std::cout << std::boolalpha << isPalindrome(56765);   
}