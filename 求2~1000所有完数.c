#include<stdio.h>
int main()
{
    int i,count;
    for(i=2;i<=1000;i++)
    {
        int sum=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }

        if(sum==i)
        {
            printf("%d ",i);
            count++;
            if(count%5==0)
                printf("\n");
        }
    }
}
//所谓完数是指，该数的各因子之和正好等于该数本身。