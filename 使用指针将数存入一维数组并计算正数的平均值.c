#include <stdio.h>
int main()
{
    int arr[1000];
    int x=0,count=0,*p=arr;
    double sum=0,average;
    printf("请输入数存入一维数组中：\n");
    for (int i = 0;; ++i)
    {
        scanf("%d",&x);
        *(p+i)=x;
        if(*(p+i)>0)
        {
            sum+=*(p+i);
            count++;
        }
        if(x==0)
            break;
    }
    average=sum/count;
    printf("数组元素中值为正值的平均值为%lf",average);
    return 0;
}