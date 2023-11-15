#include <iostream>

int* findMax(int arr[], int size)
{
    int *result = arr;
    for(int *c = arr; c != (arr + size); c++)
    {
        if(*result < *c)
        {
            result = c;
        }
    }
    return result;
}
int main()
{
    int arr[] = {5, 4, 10, 3, 15};
    std::cout << *findMax(arr,5) << std::endl;
}