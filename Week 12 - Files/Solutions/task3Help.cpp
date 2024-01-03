#include <iostream>
#include <fstream>

int main()
{
    int n;
    std::cin >> n;
    int tmp;
    std::ofstream fout("array.dat", std::ios::in | std::ios::binary);
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        fout.write((char*)&tmp, sizeof(tmp));
    }
    fout.close();
    

}