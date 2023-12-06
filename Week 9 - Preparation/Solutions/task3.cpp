#include <iostream>

bool candidates_helper(int arr[], int n, int goal)
{
    if(goal == 1) return true;
    bool result = false;
    for(int i = 0; i < n; i++)
    {
        if(goal % arr[i] == 0)
        {
            result = result || candidates_helper(arr, n, goal / arr[i]);
        }
    }
    return result;
}
bool candidates_goal(int arr[], int n, int goal)
{
    if(goal == 1)
    {
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1) flag = true;
        }
        return flag;
    }
    else
    {
        return candidates_helper(arr,n,goal);
    }
}
int main()
{
    int n;
    std::cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];   
    }

    int goal;
    std::cin >> goal;

    std::cout << std::boolalpha << candidates_goal(arr, n, goal) << std::endl;
    delete[] arr;
}