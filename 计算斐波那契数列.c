#include <stdio.h>
#include <windows.h>
int main ()
{
    double f1=1,f2=1,f,i;
    int count=0;
    for (i=3;i<=24;i++)
    {
        f=f1+f2;
        printf("%.0lf\t",f);
        count++;
        if (count%5==0)
            printf("\n");
        f1=f2;
        f2=f;
    }
    system("pause");
    return 0;
}
