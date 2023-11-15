#include <iostream>
#include <cstring>

size_t cap;
size_t size;
char* arr;

char pop()
{
    char result = arr[size - 1];
    size --;
    return result;
}
char top()
{
    return arr[size - 1];
}
void addElement(char element)
{
    if(size == cap)
    {
        char *newArr = new char[cap * 2];
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
    arr = new char[10]; 
    char arr[256];
    std::cin >> arr;
    bool result = true;
    for(int i = 0; i < strlen(arr); i++)
    {
        if(arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
        {
            addElement(arr[i]);
        }
        else
        {
            switch(arr[i])
            {
                case ')':
                {
                    if(size == 0 || top() != '(')
                    {
                        result = false;
                    }
                    else
                    {
                        pop();
                    }
                    break;
                }
                case '}':
                {
                    if(size == 0 || top() != '{')
                    {
                        result = false;
                    }
                    else
                    {
                        pop();
                    }
                    break;
                }
                case ']':
                {
                    if(size == 0 || top() != '[')
                    {
                        result = false;
                    }
                    else
                    {
                        pop();
                    }
                    break;
                }
            }
        }
    }
    std::cout << std::boolalpha << (result && size == 0);
    delete[] arr;

}