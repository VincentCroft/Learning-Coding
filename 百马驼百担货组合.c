#include<stdio.h>
int main()
{
    int max, mid, min;
    {
        for(max=0;max<=33;max++)//全用大马最多33头
        {
            for(mid=0;mid<=50;mid++)//全用中马最多50头
            {
                min = 100-max-mid;//小马=总数-大马-小马
                if(max*3+mid*2+min*(1/2)==100) //判断取值的大马数量能驮的数量+中马数量能驮的数量+小马数两能驮的数量是否=100
                {
                    printf("大马=%d 中马=%d 小马=%d\n",max,mid,min);//成立则分别打印大、中、小马的数量
                }
            }
        }
    }
    return 0;
}