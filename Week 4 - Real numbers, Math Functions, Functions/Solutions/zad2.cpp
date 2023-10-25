#include <iostream>

bool areAllEven(int a[], int n)
{
    bool flag = true;
    for(int i = 0; i < n && flag; i++)
    {
        if(a[i] % 2 != 0)
        {
            flag = false;
        }
    }
    return flag;
}
int main()
{
    int arr[] = {2,6,4,10};
    std::cout << std::boolalpha << areAllEven(arr, 4) << std::endl;
}