#include <iostream>
#include <fstream>

struct Point
{
    int x, y;
};
int main()
{
    std::ifstream fin("points.dat", std::ios::in | std::ios::binary);
    std::ofstream fout("points.txt", std::ios::out);
    if(!fin)
    {
        std::cout << "There is an error with the file" << std::endl;
        return 1;
    }
    Point p;
    while(fin.read((char*)&p, sizeof(p)))
    {
        fout << p.x << " " << p.y << std::endl;
    }
    fin.close();
    fout.close();
}