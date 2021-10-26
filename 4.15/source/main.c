#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	float sum=5000;
	printf("10.0\n");
	printf("year      rate\n");
	for (i = 1; i <= 15; i++)
	{
		sum = sum * 1.1;
		printf("%d      %0.2f", i,sum );
		printf("\n");
	}

	sum = 5000;
	printf("10.5\n");
	printf("year      rate\n");
	for (i = 0; i <= 15; i++)
	{
		sum = sum * 1.105;
		printf("%d      %0.2f", i, sum);
		printf("\n");
	}

	sum = 5000;
	printf("11.0\n");
	printf("year      rate\n");
	for (i = 0; i <= 15; i++)
	{
		sum = sum * 1.11;
		printf("%d      %0.2f", i, sum);
		printf("\n");
	}

	sum = 5000;
	printf("11.5\n");
	printf("year      rate\n");
	for (i = 0; i <= 15; i++)
	{
		sum = sum * 1.115;
		printf("%d      %0.2f", i, sum);
		printf("\n");
	}

	sum = 5000;
	printf("12.0\n");
	printf("year      rate\n");
	for (i = 0; i <= 15; i++)
	{
		sum = sum * 1.12;
		printf("%d      %0.2f", i, sum);
		printf("\n");
	}

	system("pause");
	return 0;
}