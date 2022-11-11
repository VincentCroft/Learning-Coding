#include <stdio.h>
int fun(long n)
{
    long x = 0;
    int t;
    while (n)
    {
        t=n%10;
        if (t%2==0)
            x=x*10+t;
        n=n/10;
    }
    return x;
}

int main()
{
    long n;
    printf("请输入一个数：");
    scanf("%d", &n);
    printf("所得到的新数为:%ld\n",fun(n));
}
