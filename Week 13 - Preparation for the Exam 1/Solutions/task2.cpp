#include <iostream>
#include <climits>

int* merge(int **arr, int arrCount, int *arrLen)
{
    int* counter = new int[arrCount];
    int sumOfLens = 0;
    for(int i = 0; i < arrCount; i++)
    {
        counter[i] = 0;
        sumOfLens += arrLen[i];
    }
    int* result = new int[sumOfLens];
    for(int i = 0; i < sumOfLens; i++)
    {
        int minC = INT_MAX;
        int minIdx = -1;
        for(int j = 0; j < arrCount; j++)
        {
            if(counter[j] < arrLen[j])
            {
                if(arr[j][counter[j]] < minC)
                {
                    minC = arr[j][counter[j]];
                    minIdx = j;
                }
            }
        }
        result[i] = minC;
        counter[minIdx]++;
    }
    delete[] counter;
    return result;

}
int main()
{
    int n;
    std::cin >> n;
    int* arrLen = new int[n];
    int** arr = new int*[n];
    int newSize = 0;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arrLen[i];
        arr[i] = new int[arrLen[i]];
        newSize += arrLen[i];
        for(int j = 0; j < arrLen[i]; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    int* result = merge(arr, n, arrLen);
    for(int i = 0; i < newSize; i++)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    delete[] result;
    delete[] arrLen;
    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}