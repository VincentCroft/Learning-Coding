#include <stdio.h>
int main()
{
    int m,n,i,j,l,k,s=0;
    scanf("%d%d",&m,&n);//输入几行几列
    int a[m][n];//奶牛1
    int b[m][n];//奶牛2
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]); //奶牛1
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);//奶牛2
        }
    }
    for(l = 0;l<m;l++)
    {
        for(k=0;k<n;k++)
        {
            if(a[l][k]==b[l][k])
            {
                s=s+1;//如果奶牛1和奶牛2有相似的地方，得分加1
            }
        }
    }
    printf("%d",s);//输出
    return 0;
}
