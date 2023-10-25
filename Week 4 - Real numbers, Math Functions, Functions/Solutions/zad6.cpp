#include <iostream>

bool linearDependant(int a[], int b[])
{
    if(a[0] > b[0])
    {
        int skalar = a[0] / b[0];
        return (a[0] * skalar == b[0] && b[1] * skalar == a[1] && b[2] * skalar == a[2]);
    }   
    else
    {
        int skalar = b[0] / a[0];
        return (a[0] * skalar == b[0] && a[1] * skalar == b[1] && a[2] * skalar == b[2]);
    }

}