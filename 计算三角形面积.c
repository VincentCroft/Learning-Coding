#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
    float area,a,b,c,p;
    printf("Please input a,b,c:\n");
    scanf("%f%f%f", &a,&b,&c);
    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("The area is%7.2f",area);
    system("pause");
    return 0;
}
