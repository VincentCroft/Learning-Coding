#include <stdio.h>
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int len = sizeof(arr) / sizeof(int);  //求数组长度
    int i,sum=0,minus=0,plus=0,*p=arr;
    for(i=0; i<len; i++)
    {
        if(*(p+i)<0)
        {
            plus++;
        }
        if(*(p+i)>0)
        {
            minus++;
        }
        sum+=*(p+i);
    }
    printf("正数有%d个\n",plus);
    printf("负数有%d个\n",minus);
    printf("所有元素之和为%d\n",sum);
    return 0;
}