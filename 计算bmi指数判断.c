#include <stdio.h>
#include <windows.h>
int main()
{
    double h,w,bmi;
    printf("请输入身高与体重\n");
    scanf("%lf%lf",&h,&w);
    bmi=w/(h*h);
    if (bmi<19.5)
        printf("过轻");
    else
    { switch ((int)bmi/4)
        {
            case 4:
                printf("正常\n");
                break;
            case 5:
                printf("正常\n");
                break;
            case 6:
                printf("过重\n");
                break;
            case 7:
                printf("肥胖\n");
                break;
            default:
                printf("过于肥胖\n");
        }
    }
    system("pause");
    return 0;
}
