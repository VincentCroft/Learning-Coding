#include<stdio.h>

void yhtri(int line)  //这里使用函数来解决
{
    int i = 0, j = 0;
    int arr[20][20] = { 0 };   //先定义一个二维数组
    for (i = 0; i <= line - 1; i++)
    {
        if (i == 0)
            arr[0][0] = 1;          //由特征可知一二行均为1，可让其特殊化
        else if (i == 1)
        {
            arr[1][0] = 1;
            arr[1][1] = 1;
        }
        else
        {
            for (j = 1; j < i; j++)      //读取两侧的1以外的数字进行操作
            {
                arr[i][0] = 1;
                arr[i][i] = 1;
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];  //实现三角形相加
            }
        }
    }
    for (i = 0; i < line; i++)//打印数组
    {
        for (j = line; j > i + 1; j--)
        {
            printf("   ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%-6d", arr[i][j]);  //此处用-6d的原因是如果输入行数过大，-6d可以更清晰
        }
        printf("\n");
    }
}

int main()
{
    int line = 0;
    printf("请输入杨辉三角的行数：");
    scanf("%d", &line);
    yhtri(line);        //调用函数
    return 0;
}