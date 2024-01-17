#include <iostream>

struct Point
{
    double x,y;
};

struct Mesh
{
    Point* arr;
    int size;
};

Mesh positive(Mesh m)
{
    int c = 0;
    for(int i = 0; i < m.size; i++)
    {
        if(m.arr[i].y > 0)
        {
            c++;
        }
    }
    Mesh res;
    res.size = c;
    res.arr = new Point[c];
    int idx = 0;
    for(int i = 0; i < m.size; i++)
    {
        if(m.arr[i].y > 0)
        {
            res.arr[idx++] = m.arr[i];
        }
    }
    return res;
}
int main()
{
    Mesh a;
    a.size = 5;
    a.arr = new Point[5];
    a.arr[0] = {5.0, -1.0};
    a.arr[1] = {4.0, 1.5};
    a.arr[2] = {8.5, 2.5};
    a.arr[3] = {-5.0, -5.5};
    a.arr[4] = {-5.8, 5.9};
    Mesh p = positive(a);
    for(int i = 0; i < p.size; i++)
    {
        std::cout << p.arr[i].x << " " << p.arr[i].y << std::endl;
    }
}