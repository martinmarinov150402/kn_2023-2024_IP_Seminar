#include <iostream>

size_t cap;
size_t size;
int* arr;

void addElement(int element)
{
    if(size == cap)
    {
        int *newArr = new int[cap * 2];
        cap *= 2;
        for(size_t i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }
    arr[size++] = element;
}
int main()
{
    cap = 10;
    size = 0;
    arr = new int[10]; 
    int n;
    while(std::cin >> n)
    {
        addElement(n);        
    }
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

}