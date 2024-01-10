#include <iostream>

struct int_arr
{
    int *arr;
    unsigned int size;
};

int_arr filter_evens(int_arr arr)
{
    int evensCount = 0;
    for(int i = 0; i < arr.size; i++)
    {
        if(arr.arr[i] % 2 == 0)
        {
            evensCount++;
        }
    }
    int_arr result;
    result.size = evensCount;
    result.arr = new int[evensCount];
    int idx = 0;
    for(int i = 0; i < arr.size; i++)
    {
        if(arr.arr[i] % 2 == 0)
        {
            result.arr[idx++] = arr.arr[i];
        }
    }
    return result;
}
int main()
{
    int_arr arr;
    std::cin >> arr.size;
    arr.arr = new int[arr.size];
    for(int i = 0; i < arr.size; i++)
    {
        std::cin >> arr.arr[i];
    }
    int_arr evens = filter_evens(arr);
    for(int i = 0; i < evens.size; i++)
    {
        std::cout << evens.arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr.arr;
    delete[] evens.arr;
}
