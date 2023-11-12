#include <iostream>
#include <cstring>

bool isPalindrome(char str[])
{
    bool flag = true;
    for(int i = 0; i < strlen(str) / 2 && flag; i++)
    {
        if(str[i] != str[strlen(str) - 1 - i])
        {
            flag = false;
        }
    }
    return flag;
}
int main()
{
    char str[101];
    std::cin >> str;
    std::cout << std::boolalpha << isPalindrome(str);
}