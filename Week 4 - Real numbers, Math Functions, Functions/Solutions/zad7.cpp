#include <iostream>

int nthFib(int n)
{
    int curr = 1, prev = 1;
    if(n == 1 || n == 2) return 1;
    for(int i = 3; i <= n; i++)
    {
        int curCpy = curr;
        curr = curr + prev;
        prev = curCpy;
    }
    return curr;   
}
int main()
{

}