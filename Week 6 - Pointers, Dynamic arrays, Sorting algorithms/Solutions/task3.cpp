#include <iostream>

int main()
{
    int arr[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};
    int size1 = 4;
    int size2 = 4;
    int* resultArr = new int[size1 + size2];
    for(int i = 0; i < size1; i++)
    {
        resultArr[i] = arr[i];
    }
    for(int i = 0; i < size2; i++)
    {
        resultArr[size1 + i] = arr2[i];
    }
    for(int* i = resultArr; i != (resultArr + size1 + size2); i++)
    {
        std::cout << *i << " ";
    }
    delete[] resultArr;
}