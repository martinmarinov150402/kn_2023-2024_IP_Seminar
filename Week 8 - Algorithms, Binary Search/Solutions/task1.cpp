#include <iostream>

int main()
{
    int a,k,b,m,x;
    std::cin >> a >> k >> b >> m >> x;

    int l = 0;
    int r = x;
    while(l < r)
    {
        int mid = (l + r) / 2;
        int result = (a + b) * mid - a * (mid / k) - b * (mid / m);
        if(result < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }

    std::cout << l << std::endl;

}