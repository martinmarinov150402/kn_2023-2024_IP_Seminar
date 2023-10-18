#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;
    int arr[100];
    for(int i = 0; i < m; i++)
    {
        std::cin >> arr[i];
    }
    int maxLessThenN = 0;
    for(int i = 0; i < m; i++)
    {
        if(arr[i] <= n && maxLessThenN < arr[i])
        {
            maxLessThenN = arr[i];
        }
    }
    std::cout << maxLessThenN << std::endl;
}