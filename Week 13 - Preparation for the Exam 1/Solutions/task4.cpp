#include <iostream>
#include <cstring>

void removeUpper(char* s)
{
    char* newS = new char[strlen(s)];
    int idx = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] < 'A' || s[i] > 'Z')
        {
            newS[idx++] = s[i];
        }
    }
    newS[idx] = '\0';
    strcpy(s, newS);
    delete[] newS;
}
int main()
{
    char* arr = new char[100];
    strcpy(arr, "Hello World!");
    removeUpper(arr);
    std::cout << arr << std::endl;
}