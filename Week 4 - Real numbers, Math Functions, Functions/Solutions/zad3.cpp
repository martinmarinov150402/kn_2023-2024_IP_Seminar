#include <iostream>
#include <cmath>

bool intersect(double x1, double y1, double r1, double x2, double y2, double r2)
{
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;
    double dist = sqrt(deltaX * deltaX + deltaY * deltaY);
    return (r1 + r2 > dist);


}
int main()
{
    
}