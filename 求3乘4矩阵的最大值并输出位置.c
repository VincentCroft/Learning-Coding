#include<stdio.h>
int main()
{
    int i,j,max;
    int a[3][4];
    printf("请输入3*4的矩阵：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            if(max<=a[i][j])
            {
                max=a[i][j];
            }
    }
    printf("该二维数组中最大值是a[%d][%d]=%d",i,j,max);
    return 0;
}
