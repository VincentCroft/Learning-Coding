#include<stdio.h>
#include <math.h>
int main()
{
    int n,i;
    printf("请输入您选择的数:\n");
    scanf("%d",&n);
    for (i=2;i<= sqrt(n);++i)
    {
        if(n%i==0)
            break;
    }
    if(i> sqrt(n))
        printf("%d为素数\n",n);
    else
        printf("%d为合数\n",n);
    return 0;
}

