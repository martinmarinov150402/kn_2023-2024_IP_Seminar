#include <iostream>
#include <climits>

int main()
{
    int n, k;
    int arr[100000];
    std::cin >> n >> k;
    int r = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        r = std::max(r, arr[i]);

    }

    int l = 1;

    while(l < r)
    {
        int mid = (l + r) / 2;
        int result = 0;
        for(int i = 0; i < n; i++)
        {
            result += arr[i] / mid;
        }
        if(result < k) r = mid - 1;
        else l = mid + 1;
    }

    int result = 0;
    for(int i = 0; i < n; i++)
    {
        result += arr[i] / l;
    }
    if(result < k) std::cout << l - 1 << std::endl;
    else std::cout << l << std::endl;

}