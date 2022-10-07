#include <stdio.h>
#include <windows.h>
int main ()
{
    int a,b,c;
    printf("Please input a and b:\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d\n",a,b);
    system("pause");
    return 0;
}
