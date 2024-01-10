#include <iostream>

int findMinBn(int n, int a[])
{
    int offset = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i + offset == a[i - 1])
        {
            offset++;
        }
    }
    return n + offset;
}
int main()
{
    int n;
    int a[1000];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cout << findMinBn(n, a) << std::endl;
}