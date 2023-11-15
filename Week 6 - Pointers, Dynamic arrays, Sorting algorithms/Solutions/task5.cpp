#include <iostream>

size_t cap;
size_t size;
int* arr;

int pop()
{
    int result = arr[size - 1];
    size --;
    return result;
}
int top()
{
    return arr[size - 1];
}
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
    std::cin >> n;
    int power;
    for(int i = 0; i < n; i++)
    {
        std::cin >> power;
        while(size != 0 && top() < power)
        {
            pop();
        }
        addElement(power);
        std::cout << size << " ";
    }
    delete[] arr;

}