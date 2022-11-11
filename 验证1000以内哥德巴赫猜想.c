#include <stdio.h>
#include <math.h>

int prime(int n);    //函数声明，判断素数

int main()
{for (int k = 1; k <=500 ; ++k)
    {
        int even;
        even=k*2;
        for (int i = 3; i <= even/2; i += 2)
            if (prime(i) && prime(even-i))
            {
                printf("%d=%d+%d\n",even,i,even-i);
                break;
            }
    }
    return 0;
}

// 判断素数，若是返回1，否则返回0
int prime(int n)
{
    if (n == 1)
        return 0;
    int temp = (int)sqrt(n);
    for (int i = 2; i <= temp; i ++)
        if (n % i == 0)
            return 0;
    return 1;
}
