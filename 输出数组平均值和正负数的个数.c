#include <stdio.h>
int main()
{
    int a[20],i=0,x,average,sum=0,count1=0,count2=0;
    printf("请输入数，输入完请输入0\n");
    scanf("%d",&x);
    while(x!=0)
    {
        a[i++]=x;
        scanf("%d",&x);
    }
    for (int j = 0; j <i ; ++j)
    {
        sum+=a[j];
        if(a[j]>0)
            count1++;
        else
            count2++;
    }
    average=(sum/(double)i);
    printf("平均值为%d\n",average);
    printf("正数有%d个\n",count1);
    printf("负数有%d个\n",count2);
}