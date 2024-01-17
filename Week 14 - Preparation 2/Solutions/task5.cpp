#include <iostream>
#include <cstring>

void shake(char *s)
{
    char *str = new char[strlen(s) + 1];
    int idx = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            str[idx++] = s[i];
        }
    }
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] < 'A' || s[i] > 'Z')
        {
            str[idx++] = s[i];
        }
    }
    str[strlen(s)] = '\0';
    strcpy(s, str);
}
int main()
{
    char arr[] = "Hello World!";
    shake(arr);
    std::cout << arr << std::endl;
}