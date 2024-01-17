#include <iostream>

struct intarr
{
    int* arr;
    int size;
};
intarr uniques(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                std::swap(a[i], a[j]);
            }
        }
    }
    int uniquesCount = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i-1])
        {
            uniquesCount++;
        }
    }
    int *arr = new int[uniquesCount];
    arr[0] = a[0];
    int idx = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
        {
            arr[idx++] = a[i];
        }
    }
    intarr res {arr, uniquesCount};
    return res;
}
bool comp(int *a, int n, int *b, int m)
{
    intarr uniA = uniques(a, n);
    intarr uniB = uniques(b, m);
    if(uniA.size != uniB.size)
    {
        delete[] uniA.arr;
        delete[] uniB.arr;
        return false;
    } 
    bool flag = true;
    for(int i = 0; i < uniA.size && flag; i++)
    {
        if(uniA.arr[i] != uniB.arr[i])
        {
            flag = false;
        }
    }
    delete[] uniA.arr;
    delete[] uniB.arr;
    return flag;
}
int main()
{
    int arr[] = {5, 6, 8, 10};
    int arr2[] = {6, 10, 8, 5, 5};
    std::cout << std::boolalpha << comp(arr,4,arr2,5) << std::endl;
}