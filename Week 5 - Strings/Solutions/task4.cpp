#include <iostream>
#include <cstring>

int main()
{
    char a[101];
    do
    {
        std::cin.getline(a, 100);
        int A = 0, B = 0;
        bool inA = true;
        bool startedA = false;
        for(int i = 0; i < strlen(a); i++)
        {
            if(a[i] >= '0' && a[i] <= '9')
            {
                
                if(inA)
                {

                    startedA = true;
                    A = A * 10 + a[i] - '0';
                }
                else
                {
                    B = B * 10 + a[i] - '0';
                }
            }
            else
            {
                if(startedA)
                {
                    inA = false;
                }
            }
        }
        if(strstr(a, "sum") != nullptr)
        {
            std::cout << A + B << std::endl;
        }
        else if(strstr(a, "sub") != nullptr)
        {

            std::cout << A - B << std::endl;
        }
        else if(strstr(a, "mult") != nullptr)
        {

            std::cout << A * B << std::endl;
        }
        else
        {

            std::cout << A / B << std::endl;
        }

    }
    while(strcmp(a, "quit") != 0);
}