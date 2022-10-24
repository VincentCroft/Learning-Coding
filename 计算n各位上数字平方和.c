#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("请输入数字:");
    scanf("%d", &n);
    while(n){
        sum+=(n%10)*(n%10);
        n/=10;
    }
    printf("和=%d" , sum) ;
}

