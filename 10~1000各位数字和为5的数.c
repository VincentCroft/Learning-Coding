#include<stdio.h>
int main()
{
    int n=10,a,b,c,count;
    while(n<1000)
    {
        a=n/100;
        b=n%100/10;
        c=n%10;
        if(a+b+c==5)
        {
            printf("%d ",n);
            count++;
            if(count%5==0)
                printf("\n");
        }
        n++;
    }
    return 0;
}
