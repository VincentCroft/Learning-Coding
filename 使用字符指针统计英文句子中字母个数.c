#include <stdio.h>
int main()
{
    char s[999],*p;
    int i=0;
    printf("请输入英文句子:\n");
    gets(s);
    for(p=s;*p!='\0';*p++)
    {
        if(*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')
            i++;
    }
    printf("该英文句子中有%d个字母\n",i);
}
