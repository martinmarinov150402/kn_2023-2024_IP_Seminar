#include <iostream>
#include <cstdio>
#include <cmath>

struct Point
{
    int x, y;
    void input()
    {
        std::cin >> x >> y;
    }
    void output()
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
        //printf("(%d, %d)\n", x, y);
    }
    int distance(Point a)
    {
        return sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
    }
};
int main()
{
    Point a, b;
    a.input();
    b.input();
    a.output();
    b.output();
    std::cout << a.distance(b) << std::endl;
}