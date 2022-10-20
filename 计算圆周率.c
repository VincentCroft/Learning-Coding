#include <stdio.h>
#include <math.h>
#include <windows.h>
int main ()
{
    int i=1,sign=1;
    double sum,pi;
    while (fabs(1.0/i)>=1e-6)
    {
        sum=sum+1.0/i*sign;
        sign=sign*(-1);
        i=i+2;
    }
    pi=sum*4;
    printf("圆周率为%lf",pi);
    system("pause");
    return 0;
}
