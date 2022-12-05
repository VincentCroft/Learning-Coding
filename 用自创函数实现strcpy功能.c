#include<stdio.h>
void strcpy1(char s1[],char s2[])
{
    int i;
    for (i = 0; s2[i] != 0; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = 0;
}
int main()
{
    char a[80] = "hit", b[80];
    strcpy1(b, a);
    printf("%s\n", b);
    return 0;
}