#include <iostream>

char matrix[100][100];
bool labirint(int x, int y, int n, int m)
{
    if(x >= n || x < 0 || y >= m || y < 0) return false;
    if(matrix[x][y] == 'w') return false;
    if(matrix[x][y] == 'f') return true;
    bool result = false;
    matrix[x][y] = 'w';
    result = result || labirint(x - 1, y, n, m);
    if(!result) result = result || labirint(x + 1, y, n, m);
    if(!result) result = result || labirint(x, y + 1, n, m);
    if(!result) result = result || labirint(x, y - 1, n, m);
    if(result)
    {
        matrix[x][y] = 'p';
    }
    else
    {
        matrix[x][y] = 'a';
    }
    return result;
}
int main()
{
    int n, m;
    std::cin >> n >> m;
    int startX, startY;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 's')
            {
                startX = i;
                startY = j;
            }
        }
    }
    labirint(startX, startY, n, m);
    matrix[startX][startY] = 's';
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] << " "; 
        }
        std::cout << std::endl;
    }
}