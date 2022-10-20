#include <stdio.h>
int main()
{
    int i,a,sum1=0,sum2=0;
    printf("请输入10个整数:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
            sum1+=a;
        else
            sum2+=a;
    }
    printf("奇数和=%d,偶数和=%d\n",sum2,sum1);
    return 0;
}
