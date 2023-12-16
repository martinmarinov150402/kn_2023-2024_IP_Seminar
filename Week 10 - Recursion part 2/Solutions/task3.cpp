#include <iostream>

bool horsePath(int n,int x, int y, bool **matrix, int counter, int* pathA, int* pathB)
{
    if(x < 0 || y < 0 || x >= n || y >= n) return false;
    if(matrix[x][y]) return false;
    if(counter == n * n)
    {
        for(int i = 0; i < n*n; i++)
        {
            std::cout << pathA[i] << " " << pathB[i] << std::endl;
        }
        return true;
    }

    pathA[counter - 1] = x;
    pathB[counter - 1] = y; 

    matrix[x][y] = true;
    bool result = false;
    result = horsePath(n, x + 2, y + 1, matrix, counter + 1, pathA, pathB);
    if(!result) result = horsePath(n, x + 2, y - 1, matrix, counter + 1, pathA, pathB);
    if(!result) result = horsePath(n, x - 2, y + 1, matrix, counter + 1, pathA, pathB);
    if(!result) result = horsePath(n, x - 2, y - 1, matrix, counter + 1, pathA, pathB);
    if(!result) result = horsePath(n, x + 1, y + 2, matrix, counter + 1, pathA, pathB);
    if(!result) result = horsePath(n, x - 1, y + 2, matrix, counter + 1, pathA, pathB);
    if(!result) result = horsePath(n, x + 1, y - 2, matrix, counter + 1, pathA, pathB);
    if(!result) result = horsePath(n, x - 1, y - 2, matrix, counter + 1, pathA, pathB);
    matrix[x][y] = false;
    return result;
}
int main()
{
    int n;
    std::cin >> n;
    bool **matrix;
    matrix = new bool*[n];
    for(int i = 0; i < n; i++)
    {
        matrix[i] = new bool[n];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matrix[i][j] = false;
        }
    }

    int *pathA = new int[n * n];
    int *pathB = new int[n * n];

    horsePath(n, n-1, 0, matrix, 1, pathA, pathB);

    for(int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] pathA;
    delete[] pathB;
}