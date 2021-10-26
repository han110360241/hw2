#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int p, b, c, d,ms;
    float sa;
    printf("輸入 1.經理 2.時薪工 3.傭金工 4.零工:");
    scanf_s("%d", &p);


    switch (p) {
    case 1:
        printf("經理的週薪:");
        scanf_s("%d", &b);
        printf("經理的週薪:%d", b);
        break;
    case 2:
        printf("時薪工一小時的薪水:");
        scanf_s("%d", &c);
        printf("時薪一週工時:");
        scanf_s("%d", &b);
        if (b > 40)
        {
            sa = c * 40 + (c * 1.5 * (b - 40));
        }
        else
        {
            sa = c * b;
        }
            
        printf("時薪工週薪資:%.2f",sa);
        break;
    case 3:
        printf("銷售金額:");
        scanf_s("%d", &c);
        sa = 250 + c * 5.7;
        printf("傭金工週薪資:%.2f",sa);
        break;
    case 4:
        printf("一件的酬勞:");
        scanf_s("%d", &c);
        printf("做了幾件:");
        scanf_s("%d", &p);
        sa = c * p;
        printf("酬勞:%.2f",sa);
        break;
    }

	system("pause");
	return 0;
}