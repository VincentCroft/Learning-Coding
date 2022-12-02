#include<stdio.h>
int main()
{
    int i,j,n=1,tmp,count=0;
    int a[4][4];
    printf("请输入4*4的矩阵：\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<n;j++)
        {
            tmp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tmp;
        }
        ++n;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(count%4==0)
                printf("\n");
            printf("%d\t",a[i][j]);
            count++;
        }
    }
    return 0;
}