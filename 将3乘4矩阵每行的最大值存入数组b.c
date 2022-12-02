#include<stdio.h>
int main()
{
    int i,j,max;
    int a[3][4],b[3];
    printf("请输入3*4的矩阵：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            max=a[i][0];
            if(max<=a[i][j])
            {
                max=a[i][j];
                b[i]=max;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("b[%d]为%d\n",i,b[i]);
    }
    return 0;
}