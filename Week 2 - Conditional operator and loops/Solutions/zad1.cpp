#include <iostream>

int main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    for(int i = a; i <= b; i += c)
    {
        std::cout << i << " ";
    }
}
//Izvedete chislata ot a do b prez 2 stupki a prez c stupki