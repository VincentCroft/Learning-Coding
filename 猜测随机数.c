#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b,i;
    srand((int) time(0));
    a =rand()%100;
    for (i=0;i<=2;i++)
    {
        printf("请输入你猜的数\n");
        scanf("%d",&b);
        if (b==a)
        {
            printf("猜对了");
            break;
        }
        else
        {
            printf("猜错了");
        }
    }
    if (i==3)
    {
        printf("没机会了");
        return 0;
    }
}