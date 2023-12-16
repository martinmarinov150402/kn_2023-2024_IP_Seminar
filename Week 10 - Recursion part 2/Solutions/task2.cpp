#include <iostream>

bool findP(int x, 
           int y, 
           int matrix[][255], 
           int rows, 
           int cols, 
           int gX, 
           int gY, 
           int iX, 
           int iY, 
           bool passed, 
           bool flag, 
           int capacity,
           int currentMilk)
{
    if(currentMilk < 0) return false;
    if(currentMilk > capacity) return false;
    if(x < 0 || y < 0 || x >= rows || y >= cols)
    {
        return false;
    }
    if(x == iX && y == iY && flag)
    {
        return passed;
    }
    if(x == gX && y == gY)
    {
        passed = true;
    }

    int cur = matrix[x][y];
    matrix[x][y] = capacity + 1;
    bool result = false;
    result = result || findP(x + 1, y, matrix, rows, cols, gX, gY, iX, iY, passed, true, capacity, currentMilk + cur);
    result = result || findP(x - 1, y, matrix, rows, cols, gX, gY, iX, iY, passed, true, capacity, currentMilk + cur);
    result = result || findP(x, y + 1, matrix, rows, cols, gX, gY, iX, iY, passed, true, capacity, currentMilk + cur);
    result = result || findP(x, y - 1, matrix, rows, cols, gX, gY, iX, iY, passed, true, capacity, currentMilk + cur);
    matrix[x][y] = cur;
    return result;

}
bool findPath(int matrix[][255], int rows, int cols, int gX, int gY, int iX, int iY, int capacity)
{
    return findP(iX, iY, matrix, rows, cols, gX, gY, iX, iY, false, false, capacity, 0);
}
int main()
{
    int n;
    int matrix[255][255];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    int iX, iY;
    int gX, gY;
    int cap;
    std::cin >> iX >> iY;
    std::cin >> gX >> gY;
    std::cin >> cap;
    std::cout << std::boolalpha << findPath(matrix,n,n,gX,gY,iX,iY,cap) << std::endl;
}