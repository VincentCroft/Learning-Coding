#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},x,flag;
    printf("请输入一个数：\n");
    scanf("%d",&x);
    for (int i = 0; i < 9; ++i)
    {
        if(x==a[i])
        {
            int k;
            k=(++i);
            printf("该数在数组中的位置为%d",k);
            flag=0;
            break;
        }
        else
            flag=1;
    }
    if(flag==1)
        printf("没有找到输出-1");
}