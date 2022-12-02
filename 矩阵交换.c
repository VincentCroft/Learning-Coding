#include<stdio.h>
#include <windows.h>
//行列
#define COL 4
#define ROW 4
void inputData(int array[][COL]);
void printAll(int array[][COL]);
void transpositionArray(int array[][COL]);
int main()
{

    int array[ROW][COL]={0};
    //输入
    inputData(array);
    printf("原数组\n");
    //打印
    printAll(array);
    //转置
    transpositionArray(array);
    printf("已转置数组\n");
    //打印
    printAll(array);
    system("pause");
    return 0;
}
void inputData(int array[][COL])
{
    int x,y;
    for(y=0;y<ROW;y++)
    {
        for(x=0;x<COL;x++)
        {
            printf("请输入第%d行第%d列数据：",y+1,x+1);
            fflush(stdin);
            scanf("%d",&array[y][x]);

        }
    }
}
void transpositionArray(int array[][COL])
{
    int temp=0;
    int x,y;
    //沿着对角线对称换一下值就好了。又因为对角线不需要变动，所以有了下面的循环条件。
    for(y=1;y<ROW;y++)
    {
        for(x=0;x<y;x++)
        {
            temp=array[y][x];
            array[y][x]=array[x][y];
            array[x][y]=temp;
        }
    }
}
void printAll(int array[][COL])
{
    int x,y;
    for(y=0;y<ROW;y++)
    {

        for(x=0;x<COL;x++)
        {
            printf("%d ",array[y][x]);
        }
        printf("\n");
    }
}

