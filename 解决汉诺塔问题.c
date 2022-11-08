#include<stdio.h>
int c=0;
void move(char x,int n,char z)
{
    printf("第%i步：将%i号盘从%c->%c\n",++c,n,x,z);
}
void hanoi(int n,char x,char y,char z)
{
    if(n==1)
        move(x,1,z);
    else
    {
        hanoi(n-1,x,z,y);
        move(x,n,z);
        hanoi(n-1,y,x,z);
    }
}
int main()
{
    int n;
    printf("3个塔座为a、b、c，圆盘最初在a座，借助b座移到c座。请输入圆盘数：");
    scanf("%d",&n);
    hanoi(n,'a','b','c');
}

