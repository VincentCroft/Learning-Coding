#include <stdio.h>
int main()
{
    float d,t,fee;
    printf("请输入里程（精确到0.1km）与等待时间（精确到分钟）\n");
    scanf("%f%f",&d,&t);
    if (d<3)
        fee=10;
    else
    {
        if (d>=3&&d<=10)
            fee=10+(d-3)*2;
        else
            fee=10+7*2+(d-10)*2*1.5;
    }
    fee=fee+t/5*2;
    fee = (int)(fee*1000+0.5)/1000.0;
    printf("乘客应支付的车费为%0.0f",fee);
    return 0;
}