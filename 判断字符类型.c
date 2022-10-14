#include <stdio.h>
int main()
{
    char ch;
    printf("press a key and then press enter:");
    ch = getchar();
    if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
        printf(" %c is 其他字符 ,ASCII is %d\n", ch, ch);
    if (ch >= 48 && ch <= 57)
        printf("%c is 数字字符,ASCII is %d\n", ch, ch);
    if (ch >= 65 && ch <= 90)
        printf("%c is 大写字母,ASCII is %d\n", ch, ch);
    if (ch >= 97 && ch <= 122)
        printf("%c is 小写字母,ASCII is %d\n", ch, ch);
    return 0;
}