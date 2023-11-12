#include <iostream>
#include <cstring>

int main()
{
    char str[101];
    char maxLen[101];
    strcpy(maxLen, "");
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> str;
        if(strlen(maxLen) < strlen(str))
        {
            strcpy(maxLen, str);
        }
    }
    std::cout << maxLen << std::endl;
}