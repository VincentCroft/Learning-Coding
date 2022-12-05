#include <stdio.h>
int main()
{
    char s[80],a[80];int i;
    gets(s);
    for ( i = 0;s[i]; i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            a[i]=s[i]-3;
            if(a[i]<'a')
                a[i]=a[i]+26;
        }
        else
            a[i]=s[i];
    }
    a[i]=0;
    puts(a);
    return 0;
}