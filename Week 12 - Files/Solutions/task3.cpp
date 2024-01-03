#include <iostream>
#include <fstream>

int main()
{
    int arr[255];
    int idx = 0;
    std::ifstream fin("array.dat", std::ios::in | std::ios::binary);
    int tmp;
    while(fin.read((char*)&tmp, sizeof(tmp)))
    {
        arr[idx++] = tmp;
    }
    fin.close();
    for(int i = 0; i < idx; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    for(int i = 0; i < idx; i++)
    {
        for(int j = i + 1; j < idx; j++)
        {
            if(arr[j] < arr[i])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }
    std::ofstream fout("sorted.txt", std::ios::out | std::ios::binary);
    for(int i = 0; i < idx; i++)
    {
        fout << arr[i] << " ";
    }
    fout.close();
    return 0;
}