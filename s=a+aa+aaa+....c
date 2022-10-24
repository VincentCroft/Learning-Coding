#include<stdio.h>
int main()
{
    int a,n,s=0,t;
    printf("输入a和n：");
    scanf("%d%d",&a,&n);
    t=a;
    printf("s=");
    while (n>0)
    {
        printf("%d",t);
        s+=t;
        a=a*10;
        t=t+a;
        n--;
        if (n!=0)
            printf("+");
    }
    printf("s=%d", s);
}

