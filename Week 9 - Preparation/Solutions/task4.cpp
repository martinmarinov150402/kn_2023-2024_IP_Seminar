#include <iostream>
#include <cstring>

char* num_to_str(int num)
{
    if(num < 10 && num > 0)
    {
        char* res = new char[2];
        res[0] = '0' + num;
        res[1] = '\0';
        return res;
    }
    char* rest = num_to_str(num / 10);
    char* tmp = new char[2];
    tmp[0] = '0' + (num % 10);
    tmp[1] = '\0';
    char* res = new char[strlen(rest) + 2];
    strcpy(res, rest);
    delete[] rest;
    strcat(res, tmp);
    delete[] tmp;
    return res;
} 
int main()
{
    std::cout << num_to_str(568) << std::endl;
}
