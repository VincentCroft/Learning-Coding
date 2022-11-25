#include<stdio.h>
int main()
{
    int a[4],b[4],x;
    printf("请输入明文:");
    scanf("%d",&x);
    a[0]=x/1000;
    a[1]=x%1000/100;
    a[2]=x%100/10;
    a[3]=x%10;
    for (int i = 0; i < 4; ++i)
    {
        a[i]+=5;
        b[i]=(a[i]%10);
    }
    printf("密文为%d%d%d%d\n",b[3],b[2],b[1],b[0]);
    return 0;
}
