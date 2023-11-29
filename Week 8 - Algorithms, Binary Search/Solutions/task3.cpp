#include <iostream>

int main()
{
    int n, k, l;
    std::cin >> n >> k >> l;
    int a[100000];
    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    int left = a[0];
    int right = l;

    while(left < right)
    {
        int mid = (left + right) / 2;

        int path = 0;
        int brZar = 0;
        //mid = 22;
        //int curBenzin = 0;
        while(path + mid < l)
        {
            int idxBenzin = n - 1;
            for(int i = 0; i < n; i++)
            {
                if(a[i] > path + mid)
                {
                    idxBenzin = i - 1;
                    break;
                }
            }
            if(idxBenzin == -1)
            {
                left = mid + 1;
            }
            path = a[idxBenzin];
            brZar ++;
        }
        //std::cout << "Mid: "<< mid << " " << "BrZar : "<< brZar << std::endl;
        if(brZar > k)
        {
            left = mid + 1;   
        }
        else
        {
            right = mid;
        }
        

    }
    std::cout << left << std::endl;
}