#include<stdio.h>
int main()
{
    int i,j,tmp=0,n=1,count=0;
    int a[3][4];
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
        for(j=0;j<3;j++)
        {
            tmp=a[i][j];
            a[i][j]=a[i][3-j];
            a[i][3-j]=tmp;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
            count++;
            if(count%4==0)
                printf("\n");
        }
    }
    return 0;
}