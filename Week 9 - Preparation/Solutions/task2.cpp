#include <iostream>

bool peak(int n, int arr[])
{
    bool flag = true;
    for(int i = 0; i < n - 1; i++)
    {
        if(flag)
        {
            if(arr[i] > arr[i + 1])
            {
                flag = false;
            }
        }
        else
        {
            if(arr[i] < arr[i+1])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n;
    std::cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::boolalpha << peak(n, arr) << std::endl;
    delete[] arr;
}