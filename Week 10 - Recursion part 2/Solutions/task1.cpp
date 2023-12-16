#include <iostream>
#include <cstring>

bool findWordInCrossword(char matrix[][255], std::size_t rows, std::size_t cols, char word[], int x, int y, int idx)
{
    if(x < 0 || x >= rows || y < 0 || y >= cols)
    {
        return false;
    }
    if(idx >= strlen(word)) return true;
    if(matrix[x][y] == '\0') return false;
    if(matrix[x][y] != word[idx]) return false;
    bool result = false;
    char cur = matrix[x][y];
    matrix[x][y] = '\0';
    result = result || findWordInCrossword(matrix, rows, cols, word, x + 1, y, idx + 1);
    result = result || findWordInCrossword(matrix, rows, cols, word, x - 1, y, idx + 1);
    result = result || findWordInCrossword(matrix, rows, cols, word, x, y + 1, idx + 1);
    result = result || findWordInCrossword(matrix, rows, cols, word, x, y - 1, idx + 1);
    matrix[x][y] = cur;
    return result;
}

unsigned findWordsInCrossword(char matrix[][255], std::size_t rows, std::size_t cols, char words[][255], std::size_t wCount)
{
    int counter = 0;
    for(int i = 0; i < wCount; i++)
    {
        bool result = false;
        for(int x = 0; x < rows; x++)
        {
            for(int y = 0; y < cols; y++)
            {
                result = result || findWordInCrossword(matrix, rows, cols, words[i], x, y, 0);
            }
        }
        if(result == true)
        {
            counter++;
        }
    }
    return counter;
}
int main()
{
    char matrix[][255] = {
        {'c', 'a', 't'},
        {'w', 'h', 'o'},
        {'w', 'i', 'n'}
    };
    char words[][255] = {"cat", "hello", "what", "caca"};
    std::cout << findWordsInCrossword(matrix, 3, 3,words, 4);
}