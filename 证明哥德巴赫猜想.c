#include<stdio.h>
#include <math.h>
int Prime(int n);
int main()
{
    int x;
    int number_one,number_two;
    int i,j;
    printf("请输入一个大于2的偶数:");
    scanf("%d",&x);
    if(x==4)
        printf("4=2+2\n");
    else
    {
        for (i=3;i<=x/2;i++)          //寻找【3，x/2】内的素数
        {
            number_one=Prime(i);
            if (number_one==1)     //如果number_one ==1 ，说明函数返回了1，说明i是素数
            {
                for (j=x/2;j<x;j++)  //在i是素数的情况下，继续寻找【x/2,x)内的素数j
                {
                    number_two = Prime(j);
                    if ((number_two==1)&&(x==i+j))    //如果number_two ==1 ，说明函数返回了1，说明j是素数
                    {
                        printf("%d=%d+%d\n",x,i,j); //如果i和j都是素数，且i+j == x,则将它们输出
                    }
                }
            }
        }
    }
    return 0;
}

int Prime(int n)
{
    int i;
    for(i=2;i<= sqrt(n);i++)
    {
        if(n%i==0)    //让该数除于 i ，如果有一项能够整除，说明该数不是素数，返回0
        {
            return 0;
        }
    }
    return 1;          //循环结束，上面的都不能整除，则说明该数是素数
}

