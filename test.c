#include <stdio.h>
#include <windows.h>
int main(void)
{
    system("title ���������������");
    float r, s,z;
    printf("������ȷ����:\n");
    scanf("%f", &r);
    printf("��������������\n");
    scanf("%f", &s);
    z = s/r;
    printf("������������Ϊ %.3f%%\n",z*100);
    system("pause");
    return 0;
}