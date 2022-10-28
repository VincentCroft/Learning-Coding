#include <stdio.h>
int main()
{
    int n=1,m,sum,i;
    while (1)
    {
        m=n;
        sum=0;
        for (i=1;i<8;i++)
        {
            m=m*2;
            sum+=m;
        }
        sum+=n;
        if (sum==765)
        {
            printf("最下层有%d个灯\n", n);
            printf("最上层有%d个灯\n", m);
            break;
        }
        n++;
    }
    return 0;
}
