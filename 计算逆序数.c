#include <stdio.h>
#include <windows.h>
int main()
{
    int b,a,a1,a2,a3;
    printf("Please input a:\n");
    scanf("%d", &a);
    scanf("%d",&b);
    a1=a%10;
    a2=a/10%10;
    a3=a/100;
    b=a1*100+a2*10+a3;
    printf("%d",b);
    system("pause");
    return 0;
}