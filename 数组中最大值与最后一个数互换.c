#include <stdio.h>
int main()
{
    int a[10]={1,2,3,10,5,6,7,8,9,4};
    int max=a[0],i,t;
    for (int j = 0; j < 10; ++j)
    {
        if(a[j]>max)
        {
            max=a[j];
            i=j;
        }
    }
    t=a[i];
    a[i]=a[9];
    a[9]=t;
    for (int k = 0; k <10 ; ++k)
    {
        printf("%d ",a[k]);
    }
}