#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    printf("请输入字符串\n");
    gets(str);
    int i,len;
    char temp;
    len=strlen(str);
    for(int i = 0;i<len/2;i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    puts(str);
    return 0;
}