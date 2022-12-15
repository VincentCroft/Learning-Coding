#include <stdio.h>
#include <string.h>             //用到strcat(),strlen()函数
#define M 100

void fun1(char tt[])            //将重复的字符抹掉
{
    int i, j;
    char ch;
    for (i = 0; i < M; i++)
    {
        if (tt[i] != ' ')          //确保确定的这一项不是空格
        {
            ch = tt[i];           //确定第一次出现的字符
            for (j = i + 1; j < M; j++)  //在他后方寻找
            {
                if (ch == tt[j])   //遇到一样的
                    tt[j] = ' ';      //用' '替换
            }
        }
    }
    for (i = 0; i < strlen(tt); i++)
    {
        if (tt[i] == ' ')                  //找到' '位置
        {
            for (j = i; j < strlen(tt) - 1; j++) //去除' '
                tt[j] = tt[j + 1];
            tt[j] = '\0';                 //此时最后一项与倒数第二项相同，用'\0'彻底抹除左后一项（目的是去除' '字符串缩短）
            i--;
        }                               //防止连续出现多个' '（假如没有i--，此时tt[i]仍然为' '运行下一步为i++，这个空格就被保留下来了）
    }
}        //将字符串中相同的字母去掉

char *fun2(char tt[])           //确定子集字符串，返回字符串第一个字符的地址
{
    int i, j, k;
    char ch;
    static char aa[M];          //静态变量，保证调用函数结束后数组还在
    char *p;
    k = 0;
    for (i = 0; i < strlen(tt); i++)
    {
        ch = tt[i];                       //确定第一次出现的字符
        for (j = i + 1; j < strlen(tt); j++)
        {
            if (ch == tt[j])               //如果再次出现一个相同的字符将他赋值给aa[M]数组
            {
                aa[k] = ch;
                k++;
            }
        }
    }
    aa[k] = '\0';                         //最后加上'\0'一来这是个字符串，二来main()函数中作为for循环结束条件
    p = &aa[0];                           //确定第一个字符的地址
    return p;                           //返回地址
}

int main()
{
    char tt[M],pp[M];           //定义两个数组，储存字符串
    char *p;                    //接受fun2()返回的地址，并输出交集字符串
    int i;
    printf("请输入第一串字符串：\n");
    gets(tt);
    printf("请输入第二串字符串：\n");//abcdef123abc12
    gets(pp);                   //acef123ace124
    fun1(tt);                   //调用函数
    fun1(pp);
    //printf("%s\n",tt);        //供检验使用
    //printf("%s\n",pp);
    strcat(tt,pp);
    //printf("%s\n",tt);
    p=fun2(tt);                 //调用函数
    for(i=0;*(p+i)!='\0';i++)
    {
        printf("%c",*(p+i));    //acef123
    }
    return 0;
}