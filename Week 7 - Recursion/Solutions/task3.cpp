#include <iostream>

int maxSum(int pos, int arr[], size_t n)
{
    if(pos >= n) return 0;
    return arr[pos] + std::max(std::max(maxSum(pos + 1, arr, n), maxSum(pos + 2, arr, n)), maxSum(pos + 3, arr, n));
}
int main()
{
    int n; 
    std::cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::max(std::max(maxSum(0, arr, n), maxSum(1, arr, n)), maxSum(2, arr, n));
}