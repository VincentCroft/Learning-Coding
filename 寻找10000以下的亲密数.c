#include <stdio.h>
int main()
{
    int a,b,i,n;
    for (a=1; a<10000;a++)
    {
        b=0;
        for (i=1;i<=a/2;i++)
        {
            if (a%i==0)
                b+=i;
        }
        n=0;
        for (i=1;i<=b/2;i++)
        {
            if (b%i==0)
                n+=i;
        }
        if (n==a&&a<b)
            printf("亲密数有：(%d,%d)\n",a,b);
    }
    return 0;
}
//如果整数A的全部因子（包括1，不包括A本身）之和等于B；且整数B的全部因子（包括1，不包括B本身）之和等于A，则A和B称为亲密数。求10000以内的亲密数。
