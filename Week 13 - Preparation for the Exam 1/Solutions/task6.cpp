#include <iostream>

struct Polynom
{
    int power;
    double* arr;
};

Polynom sum_poly(Polynom a, Polynom b)
{
    Polynom result;
    int p = 0;
    p = std::max(p, a.power);
    p = std::max(p, b.power); 
    result.power = p;
    result.arr = new double[p + 1];
    if(a.power < b.power)
    {
        std::swap(a, b);
    }
    for(int i = 0; i <= b.power; i++)
    {
        result.arr[i] = a.arr[i] + b.arr[i];
    }
    for(int i = b.power + 1; i <= a.power; i++)
    {
        result.arr[i] = a.arr[i];
    }
    return result;
}
int main()
{
    Polynom a, b;
    a.power = 3;
    a.arr = new double[4];
    b.power = 5;
    b.arr = new double[6];
    a.arr[0] = 4;
    a.arr[1] = 5;
    a.arr[2] = 6.5;
    a.arr[3] = 7.8;
    b.arr[0] = 6;
    b.arr[1] = 5;
    b.arr[2] = 3.5;
    b.arr[3] = 2.2;
    b.arr[4] = 10;
    b.arr[5] = 15;
    Polynom c = sum_poly(a,b);
    for(int i = 0; i <= c.power; i++)
    {
        if(i == 0)
        {
            std::cout << c.arr[i] << " + ";
        }
        else if(i == c.power)
        {
            std::cout << c.arr[i] << "x^" << i << std::endl;
        }
        else
        {
            std::cout <<c.arr[i] << "x^" << i << " + ";
        }
    }
    delete[] a.arr;
    delete[] b.arr;
    delete[] c.arr;
}