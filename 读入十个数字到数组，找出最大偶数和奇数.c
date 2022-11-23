#include <stdio.h>
int main()
{
    int a[10],i=0,x,max1=0,max2=0;
    printf("请输入数，输入完请输入0\n");
    scanf("%d",&x);
    while(x!=0)
    {
        a[i++]=x;
        scanf("%d",&x);
    }
    for (int j = 0; j < 10; ++j)
    {
        if(a[j]%2==0)
        {
            if(a[j]>max1)
                max1=a[j];
        }
        else
        {
            if(a[j]>max2)
                max2=a[j];
        }
    }
    if(max1!=0)
        printf("最大偶数为%d\n",max1);
    else
        printf("没有偶数！\n");
    if(max2!=0)
        printf("最大奇数为%d\n",max2);
    else
        printf("没有奇数！\n");
}