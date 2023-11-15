#include <iostream>

void countingSort(int arr[], int size)
{
    int* counts = nullptr;
    int maxi = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    counts = new int[maxi + 1];
    for(int i = 0; i <= maxi; i++)
    {
        counts[i] = 0;
    }
    for(int i = 0; i < size; i++)
    {
        counts[arr[i]]++;
    }
    int idx = 0;
    for(int i = 0; i <= maxi; i++)
    {
        for(int j = 0; j < counts[i]; j++)
        {
            arr[idx++] = i;
        }
    }
}
int main()
{
    int arr[10] = {5, 8, 1, 4, 6, 7, 2, 9, 3, 0};
    countingSort(arr, 10);
    for(int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }
}