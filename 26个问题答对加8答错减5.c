#include<stdio.h>
int main()
{
    int sum=26,no,grade;
    for (int yes=0;yes<=26;++yes)
    {   no=sum-yes;
        grade=8*yes-no*5;
        if(grade==0)
            printf("正确解答题数为%d，错误解答题数为%d\n",yes,no);
    }
}