#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    double x[100], y[100];
    double minX , maxX, minY, maxY;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x[i] >> y[i];
    }
    minX = x[0];
    maxX = x[0];
    minY = y[0];
    maxY = y[0];
    for(int i = 1; i < n; i++)
    {
        if(minX > x[i]) minX = x[i];
        if(maxX < x[i]) maxX = x[i];
        if(minY > y[i]) minY = y[i];
        if(maxY < y[i]) maxY = y[i];
    }

    std::cout << "Goren lqv A: " << minX << " " << maxY << std::endl
              << "Dolen desen B: " << maxX << " " << minY << std::endl;
}