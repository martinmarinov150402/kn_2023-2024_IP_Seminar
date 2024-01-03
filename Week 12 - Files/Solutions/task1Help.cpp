#include <iostream>
#include <fstream>

struct Point
{
    int x, y;
};
int main()
{
    Point arr;
    int n;
    std::cin >> n;
    std::ofstream fout("points.dat", std::ios::out | std::ios::binary);
    if(!fout)
    {
        std::cout << "There is an error with the file" << std::endl;
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr.x >> arr.y;
        fout.write((char*)&arr, sizeof(arr));
    }
    fout.close();
    return 0; 
}