#include <iostream>

struct int_arr
{
    int* arr;
    unsigned int size;
};

int_arr duplicate(int_arr a)
{
    int_arr res;
    res.size = a.size * 2;
    res.arr = new int[res.size];
    for(int i = 0; i < a.size; i++)
    {
        res.arr[2 * i] = a.arr[i];
        res.arr[2 * i + 1] = a.arr[i];
    }
    return res;
}
int main()
{
    int_arr arr;
    arr.arr = new int[4]{1,2,2,3};
    arr.size = 4;
    int_arr arr2 = duplicate(arr);
    for(int i = 0; i < arr2.size; i++)
    {
        std::cout << arr2.arr[i] << " ";
    }   
    std::cout << std::endl;
}