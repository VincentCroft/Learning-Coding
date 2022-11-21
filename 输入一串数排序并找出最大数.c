#include <stdio.h>
int main()
{
    int a[1000],i=0,x,t;
    printf("请输入数，输入完请输入0\n");
    scanf("%d",&x);
    while(x!=0)
    {
        a[i++]=x;
        scanf("%d",&x);
    }
    int max=a[1];
    for (int j = 0; j < i; ++j)
    {
        if(a[j]>max)
            max=a[j];
    }
    printf("最大数为%d\n",max);
    for (int j = 0; j < i; ++j)
    {
        for (int k = j+1; k < i+1; ++k)
        {
            if(a[k]<a[j])
            {
                t=a[k];
                a[k]=a[j];
                a[j]=t;
            }
        }
    }
    printf("以上数按顺序排列为：");
    for (int j = 0; j <i ; ++j)
    {
        printf("%3d ",a[j]);
    }
}