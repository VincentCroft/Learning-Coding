#include<stdio.h>
int main()
{
    int n,s=0,t,a;
    printf("请输入一个数:");
    scanf("%d",&n);
    a=n;
    while (n!=0)
    {
        t=n%10;
        n=n/10;
        s=s*10+t;
    }
    if (s==a)
        printf("为回文数");
    else
        printf("不为回文数");
    return 0;
}

