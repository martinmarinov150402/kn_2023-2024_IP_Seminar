#include <iostream>

int main()
{
    int n;
    int arr[100];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int arr2[100];
    for(int i = n - 1; i >= 0; i--)
    {
        arr2[n - 1 - i] = arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}