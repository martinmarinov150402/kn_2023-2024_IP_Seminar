#include <iostream>

int main()
{
    int n;
    int arr[1000];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int el;
    std::cin >> el;

    int l = 0, r = n - 1;
    int idx = -1;
    int op = 0;
    while(l < r && idx == -1)
    {
        op++;
        int mid = (l + r) / 2;
        if(arr[mid] < el)
        {
            l = mid + 1;
        }
        else if(mid == el)
        {
            idx = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    if(arr[l] == el) idx = l;
    std::cout << "Operations: " << op << std::endl;
    std::cout << idx << std::endl;
}