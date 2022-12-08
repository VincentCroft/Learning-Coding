#include <stdio.h>
#include <string.h>
void rank(char a[])
{
    int i,j,len;
    len=strlen(a);
    char t;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    puts(a);
}
int main()
{
    char a[60],s1[60],s2[60];
    printf("请输入字符串1：\n");
    gets(s1);
    printf("请输入字符串2：\n");
    gets(s2);
    strcat(s1, s2);
    strcpy(a, s1);
    printf("排序后结果为：");
    rank(a);
    return 0;
}
