#include <stdio.h>
int main()
{
    double x,y;
    printf("请输入x的值\n");
    scanf("%lf",&x);
    if (x<=2.5)
        y=1.5*x+7.5;
    else
        y=9.32*x-34.2 ;
    printf("%lf\n",y);
    return 0;
}