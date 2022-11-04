#include<stdio.h>
int Judge(int n)
{
    int s=0,t,a;
    a=n;
    while (n!=0)
    {
        t=n%10;
        n=n/10;
        s=s*10+t;
    }
    if (s==a)
        return 1;
    else
        return 0;
}//判断是否为回文数

int Daoshu(int n)
{
    int s=0,t;
    while (n!=0)
    {
        t=n%10;
        n=n/10;
        s=s*10+t;
    }
    return s;
}//取该数的反数

int main()
{
    int y,d,z,b=1;
    printf("请输入一个数:");
    scanf("%d",&y);
    while(b)
    {
        d=Daoshu(y);
        z=y+d;
        printf("%d+%d=%d\n",y,d,z);
        if(Judge(z)==1)
        {
            b=0;
        }
        else
        {
            b=1;
            y=z;
        }
    }
    return 0;
}

