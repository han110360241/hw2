#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int p, b, c, d,ms;
    float sa;
    printf("��J 1.�g�z 2.���~�u 3.�Ī��u 4.�s�u:");
    scanf_s("%d", &p);


    switch (p) {
    case 1:
        printf("�g�z���g�~:");
        scanf_s("%d", &b);
        printf("�g�z���g�~:%d", b);
        break;
    case 2:
        printf("���~�u�@�p�ɪ��~��:");
        scanf_s("%d", &c);
        printf("���~�@�g�u��:");
        scanf_s("%d", &b);
        if (b > 40)
        {
            sa = c * 40 + (c * 1.5 * (b - 40));
        }
        else
        {
            sa = c * b;
        }
            
        printf("���~�u�g�~��:%.2f",sa);
        break;
    case 3:
        printf("�P����B:");
        scanf_s("%d", &c);
        sa = 250 + c * 5.7;
        printf("�Ī��u�g�~��:%.2f",sa);
        break;
    case 4:
        printf("�@�󪺹S��:");
        scanf_s("%d", &c);
        printf("���F�X��:");
        scanf_s("%d", &p);
        sa = c * p;
        printf("�S��:%.2f",sa);
        break;
    }

	system("pause");
	return 0;
}