#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len;
    char a[60],s1[60],s2[60];
    printf("请输入字符串1：\n");
    gets(s1);
    printf("请输入字符串2：\n");
    gets(s2);
    strcat(s1, s2);
    strcpy(a, s1);
    len=strlen(a);
    char t;
    //冒泡排序
    for(i=0;i<len-1;i++)//n个数的数列总共扫描n-1次
    {
        for(j=0;j<len-i-1;j++)//每一趟扫描到a[n-i-2]与a[n-i-1]比较为止结束
        {
            if(a[j]>a[j+1])//后一位数比前一位数小的话，就交换两个数的位置（升序）
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("排序后结果为：");
    puts(a);
    return 0;
}
