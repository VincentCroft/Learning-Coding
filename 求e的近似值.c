#include <stdio.h>
int main()
{
    float e=1.0,n=1.0;
    int i=1;
    while(1/n>1e-7)
    {
        e+=1/n;
        i++;
        n=i*n;
    }
    printf("e的值是：%f\n",e);
    return 0;
}
