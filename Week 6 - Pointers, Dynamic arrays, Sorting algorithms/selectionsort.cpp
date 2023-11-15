#include <iostream>
#include <climits>

void selectionSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int curMinIdx = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] <= arr[curMinIdx])
            {
                curMinIdx = j;
            }
        }
        std::swap(arr[i], arr[curMinIdx]);
    }
}

int main()
{
    int arr[10] = {5, 8, 1, 4, 6, 7, 2, 9, 3, 0};
    selectionSort(arr, 10);
    for(int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }

}