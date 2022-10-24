#include<stdio.h>
int main()
{
    int year,i;
    for(year=1900;year<=2018;year++)
    {
        if(( year%4==0&&year%100!=0)||(year%400==0))
        {   i++;
            printf("%d ", year);
            if(i%5==0)
                printf("\n");
        }

    }
    return 0;
}