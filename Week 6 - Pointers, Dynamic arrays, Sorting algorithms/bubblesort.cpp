#include <iostream>

void bubbleSort(int arr[], int size)
{
    bool swapped = true;
    for(int i = 0; i < size - 1 && swapped; i++)
    {
        swapped = false;
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
    }
}
int main()
{
    int arr[10] = {5, 8, 1, 4, 6, 7, 2, 9, 3, 0};
    bubbleSort(arr, 10);
    for(int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }
}