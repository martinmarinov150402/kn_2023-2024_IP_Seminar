#include <iostream>

int main()
{
   size_t n; 
   std::cin >> n;
   int arr[100];
   for(int i = 0; i < n; i++)
   {
        std::cin >> arr[i];
   } 
   if(n == 1)
   {
         std::cout << "Yes";
   }
   else
   {
        int startval = 0;
        while(startval < n - 1 && arr[startval] == arr[startval + 1])
        {
            startval++;
        } 
        bool flag = arr[startval] >= arr[startval + 1];
        bool result = true;
        for(int i = startval + 1; i < n - 1; i++)
        {
            if(flag)
            {
                if(arr[i] >= arr[i + 1])
                {
                    result = false;
                }
            }
            else
            {
                if(arr[i] <= arr[i + 1])
                {
                    result = false;
                }
            }
            flag = !flag;
        }
        std::cout << (flag ? "Yes" : "No") << std::endl;

   }

}