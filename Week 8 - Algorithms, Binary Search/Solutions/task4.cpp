#include <iostream>
#include <climits>

int main()
{
    int n, k;
    int arr[1000000];
    int l = INT_MAX;
    int r = INT_MIN;
    std::cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        l = std::min(arr[i], l);
        r = std::max(arr[i], r);
    }
    while(l < r)
    {
        int mid = (l + r) / 2;
        bool flag = false;
        int subs = 0;
        for(int i = 0; i < n; i++)
        {
            if(mid > arr[i])
            {
                if(subs >= k)
                {
                    flag = true;
                }
                subs = 0;
            }
            else
            {
                subs++;
            }
        }
        if(subs >= k) flag = true;
        if(flag)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
        //std::cout << l << " " << r << std::endl;
    }
    std::cout << l - 1 << std::endl;
}