#include <iostream>
#include <cstring>

bool inMatrix[26];
int main()
{
    char arr[26];
    std::cin >> arr;
    char matrix[5][5];
    //int counter = 0;
    int i = 0, j = 0;
    //std::cout << strlen(arr);

    for(int c = 0; c < strlen(arr); c++)
    {
        matrix[i][j] = arr[c];
        inMatrix[arr[c] - 'A'] = true;
        j++;
        if(j >= 5)
        {
            j = 0;
            i++;
        }
    }
    /*j++;
    if(j >= 5)
    {
        j = 0;
        i++;
    }*/
    //std::cout << i << " " << j << std::endl;

    for(char letter = 'A'; letter <= 'Z'; letter++)
    {
        if(letter == 'J' || inMatrix[letter - 'A'])
        {
            continue;
        }
        matrix[i][j] = letter;
        j++;
        if(j >= 5)
        {
            j = 0;
            i++;
        }
    }
    std::cin.ignore();
    char niz[101];
    std::cin.getline(niz, 100);
    for(int c = 0; c < strlen(niz); c++)
    {
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(matrix[i][j] == niz[c])
                {
                    std::cout << i + 1 << j + 1 << " ";
                }
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}