#include<stdio.h>
int main()
{
    int i,j,x,y;
    int a[3][4],b[10]={0};
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
            if(a[i][j]<10)
                b[a[i][j]]++;
            else
            {
                x=(a[i][j]/10);
                y=(a[i][j]%10);
                b[x]++;
                b[y]++;
            }
        }
    }
    for (int k = 0; k < 10; ++k)
    {
        printf("%d：出现%d次\n",k,b[k]);
    }
    return 0;
}