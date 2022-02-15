#include <iostream>
#include <stdarg.h>
using namespace std;
int min(int n, ...)
{
    int* ptr = &n;
    int a = *(++ptr);
    for (int min = a; n!=0; n--)
    {
        a = *(++ptr);
        if (min >=a)
        {
            min = a;
            a = *(++ptr);
            return min;
        }
    }
}

int main(void)
{
    cout << min(5, 2, 12, 23, 1, 45) << endl;
    cout << min(10, 12,34, 45, -3, 2, 12, 3, 34, 90) << endl;
    cout << min(12,6,23,12,23,12,2,45,56,788,90,1000,2) << endl;
    return 0;
}