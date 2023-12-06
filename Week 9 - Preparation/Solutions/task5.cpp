#include <iostream>
#include <cstring>

int strCmpA(char str1[], char str2[])
{
    char str1Cpy[100], str2Cpy[100];
    strcpy(str1Cpy, str1);
    strcpy(str2Cpy, str2);

    for(int i = 0;i < strlen(str1); i++)
    {
        str1Cpy[i] = std::tolower(str1[i]);

    }
    for(int i = 0; i < strlen(str2); i++)
    {
        str2Cpy[i] = std::tolower(str2[i]);
    }

    return strcmp(str1Cpy, str2Cpy);
}
int main()
{
    int n;
    std::cin >> n;
    char **arr = new char*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new char[100];
    }

    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    bool swapped = true;
    for(int i = 0; i < n && swapped; i++)
    {
        swapped = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(strCmpA(arr[j], arr[j + 1]) > 0)
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;   
    }

    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}