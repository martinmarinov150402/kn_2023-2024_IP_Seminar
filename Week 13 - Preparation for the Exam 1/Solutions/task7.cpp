#include <iostream>

void pivot(int *arr, int n, int x)
{
    int p = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > x)
        {
            if(p == -1)
            {
                p = i;
            }
        }
        else
        {
            if(p != -1)
            {
                std::swap(arr[i], arr[p]);
                p++;
            }
        }
    }
}
int main()
{
    int n;
    std::cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >>arr[i];
    }
    int x;
    std::cin >> x;
    pivot(arr, n, x);
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
}