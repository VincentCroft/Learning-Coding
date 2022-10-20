#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    int a,b,win,lost,count,money,max;
    win=0;lost=0;
    count=0;
    money=10;
    srand((int) time(0));
    while (money>0)
    {
        a=rand()%6+1;
        b=rand()%6+1;
        if(a+b==7)
        {   win++;
            money=money+4;}
        else
        {   lost++;
            money--;}
        if(money>max)
        {max=money;}
        count++;
        printf("money=%d,此时为%d回合\n",money,count);
    }
    printf("回合数为%d, 赢的次数为%d,输的次数为%d，钱最多时为%d\n",count,win,lost,max);
    system("pause");
    return 0;
}