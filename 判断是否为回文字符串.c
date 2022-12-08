#include<stdio.h>
#include<string.h>
int  main()
{
    int i,j;
    int len;
    char S1[1000];
    char S2[1000];
    printf("请输入需要判断的字符串:");
    gets(S1);
    len = strlen(S1);
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        S2[j] = S1[i];               //将S1逆序赋给S2
    }
    for(i=0,j=0;i<len;i++,j++)
    {
        if(S1[i]!=S2[i])                   //如果S1正序和逆序不同，则不是回文字符串
        {
            printf("该字符串不是回文字符串!");
            break;
        }
        else if(i==len-1)
        {
            printf("该字符串是回文字符串");
        }
    }
    return 0;
}
