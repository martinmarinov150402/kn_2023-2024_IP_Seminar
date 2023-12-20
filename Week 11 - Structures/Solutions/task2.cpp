#include <iostream>
#include <cstdio>
#include <cmath>

struct Point
{
    double x, y;
    void input()
    {
        std::cin >> x >> y;
    }
    void output()
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
        //printf("(%d, %d)\n", x, y);
    }
    double distance(Point a)
    {
        return sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
    }
};

struct Triangle
{
    Point a, b, c;
    double perimeter()
    {
        double s1 = a.distance(b), s2 = b.distance(c), s3 = c.distance(a);
        return s1 + s2 + s3;
    }
    double area()
    {
        double s1 = a.distance(b), s2 = b.distance(c), s3 = c.distance(a);
        double p = perimeter() / 2;
        return sqrt(p * (p - s1) * (p - s2) * (p - s3));
    }
};
int main()
{
    Point a, b, c;
    a.input();
    b.input();
    c.input();
    Triangle t1 = {a, b, c};
    std::cout << "Perimeter: " << t1.perimeter() << std::endl
              << "Area: "      << t1.area()      << std::endl;
}