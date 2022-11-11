#include <stdio.h>
void fanxu(int n)
{
    printf("%d",n%10);
    if (n>9)
        fanxu(n/10);
}

void zhengxu( int n )
{
    if(n<10)
        printf("%d",n);
    else
    {
        zhengxu(n/10);
        printf("%d",n%10);
    }
}

int main()
{
    int n;
    printf("请输入一个数:");
    scanf("%d",&n);
    printf("该数的正序数为：");
    zhengxu(n);
    printf("\n");
    printf("该数的反序数为：");
    fanxu(n);
    return 0;
}


