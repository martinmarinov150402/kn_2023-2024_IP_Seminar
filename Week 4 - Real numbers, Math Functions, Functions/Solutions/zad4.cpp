#include <iostream>
#include <cmath>

double dist(double x1, double y1, double x2, double y2)
{
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}
bool doubleEq(double a, double b)
{
    const double epsilon = 0.00001;
    return (a - epsilon) < b && (a + epsilon) > b;
}
bool onOneLine(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double dist1 = dist(x1, y1, x2, y2);
    double dist2 = dist(x1, y1, x3, y3);
    double dist3 = dist(x2, y2, x3, y3);

    return (doubleEq(dist1 + dist2, dist3) || 
            doubleEq(dist2 + dist3, dist1) || 
            doubleEq(dist1 + dist3, dist2));

}