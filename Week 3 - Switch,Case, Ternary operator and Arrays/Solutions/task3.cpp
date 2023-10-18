#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            std::cout << arr[i] << " ";
        }
    }
}