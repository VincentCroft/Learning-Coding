#include <stdio.h>
#include <windows.h>
int main()
{
    int a,b,c,sum;
    double average;
    printf("please input students score:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    average=sum/3.0;
    printf("sum=%d,average=%.2lf\n",sum,average);
    system("pause");
}