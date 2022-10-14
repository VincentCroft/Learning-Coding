#include <stdio.h>
int main()
{
    double y;
    int income,x;
    printf("请输入收入金额\n");
    scanf("%d",&income);
    x=income/400;
    if (x<2)
        printf("需要交税费为0\n");
    else
    {
        switch (x)
        {
            case 2:
                y=(x-800)*0.05;
                printf("需要交税费为%lf\n",y);
                break;
            case 3:
            case 4:
                y=400*0.05+(x-1200)*0.08;
                printf("需要交税费为%lf\n",y);
                break;
            default:
                y=400*0.05+800*0.08+(x-2000)*0.2;
                printf("需要交税费为%lf\n",y);
        }
    }
    return 0;
}