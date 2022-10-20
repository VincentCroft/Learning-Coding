#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b,i;
    srand((int) time(0));
    a =rand()%100+1;
    for (i=0;i<=2;i++)
    {
        printf("请输入你猜的数\n");
        scanf("%d",&b);
        if (b==a)
        {
            printf("你猜对了，真棒");
            break;
        }
        else
        {   if(b>a)
                printf("猜大了，继续加油啊！");
            else
                printf("猜小了，继续加油啊！");
        }
    }
    if (i==3)
    {
        printf("\n三次结束，你没有猜对，很遗憾！");
        return 0;
    }
}