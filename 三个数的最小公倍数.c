#include<stdio.h>
int main()
{
    int x,y,z;
    int k=1;
    printf("输入3个数：\n");
    scanf("%d%d%d",&x,&y,&z);
    while(1)
    {
        if(k%x==0&&k%y==0&&k%z==0)
            break;
        else
            k++;
    }
    printf("两个数的最小公倍数为:%d\n",k);
}
