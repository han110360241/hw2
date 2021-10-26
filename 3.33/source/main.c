#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int l, b, i, j;
	printf("Enter a length: ");
	scanf_s("%d", &l);
	printf("Enter a breadth: ");
	scanf_s("%d", &b);

	for (i = 1; i <= b; i++)
	{
		printf("+");
	}
	printf("\n");
	
	for (i = 1; i <=l-2; i++)
	{
		printf("+");
		for (j = 1; j <= b - 2; j++)
		{
			printf(" ");
		}
		printf("+");
		printf("\n");
	}
	
	for (i = 1; i <= b; i++)
	{
		printf("+");
	}
	printf("\n");
	system("pause");
	return 0;
}