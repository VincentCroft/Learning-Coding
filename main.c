#include <stdio.h>
#include <windows.h>
#define PI 3.14159
int main(void)
{
    system("title Caculating");
    double r, s;
    printf("Input the radius here:\n");
    scanf("%lf", &r);
    s = PI * r * r;
    printf("The area is %f\n",s);
    system("pause");
    return 0;
}