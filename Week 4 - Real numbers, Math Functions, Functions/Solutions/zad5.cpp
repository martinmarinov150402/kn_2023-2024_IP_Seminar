#include <iostream>

bool isSorted(int a[], int n)
{
    bool flag1 = true;
    bool flag2 = true;
    for(int i = 1; i < n && flag1; i++)
    {
        if(a[i - 1] > a[i])
        {
            flag1 = false;
        }
    }
    for(int i = 1; i < n && flag2; i++)
    {
        if(a[i - 1] < a[i])
        {
            flag2 = false;
        }
    }
    return flag1 || flag2;
}