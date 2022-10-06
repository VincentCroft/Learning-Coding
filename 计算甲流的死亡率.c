#include <stdio.h>
#include <windows.h>
int main(void)
{
    system("title 计算甲流的死亡率");
    float r, s,z;
    printf("请输入确诊数:\n");
    scanf("%f", &r);
    printf("请输入死亡数：\n");
    scanf("%f", &s);
    z = s/r;
    printf("甲流的死亡率为 %.3f%%\n",z*100);
    system("pause");
    return 0;
}
