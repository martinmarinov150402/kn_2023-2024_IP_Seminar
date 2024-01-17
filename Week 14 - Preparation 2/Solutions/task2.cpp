#include <iostream>

void shift_left(int *arr, int sizeA, int n)
{
    int *a = new int[sizeA];
    int idx = 0;
    for(int i = n; i < sizeA; i++)
    {
        a[idx++] = arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        a[idx++] = arr[i];
    }
    for(int i = 0; i < sizeA; i++)
    {
        arr[i] = a[i];
    }
    delete[] a;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    shift_left(arr,7,3);
    for(int i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}