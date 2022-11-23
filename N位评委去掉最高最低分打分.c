#include <stdio.h>
#include <windows.h>
int main()
{
    int n;
    int i;
    double min,max,sum,x;
    min=0;
    max=0;
    printf("请输入有几位评委；");
    scanf("%d",&n);
    double score[n];
    x=(n-2);
    for(i=0;i<n;i++)
    {
        printf("请输入第%d个评委的打分:",i+1);
        scanf("%lf",&score[i]);
        sum=sum+score[i];
    }
    min=score[0];
    for(i=0;i<n;i++)//循环条件判断最小值
    {
        if(score[i]<min)
        {
            min=score[i];
        }
    }
    max=score[0];
    for(i=0;i<n;i++)//循环条件判断最大值
    {
        if(score[i]>max)
        {
            max=score[i];
        }
    }
    printf("去掉一个最高分%.2lf,",max);
    printf("去掉一个最低分%.2lf\n",min);
    printf("选手的最终得分:%.2lf\n",(sum-min-max)/x);
    system("pause");
    return 0;
}