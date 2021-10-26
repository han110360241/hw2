#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours;
	float rate,sa;
	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
		{
			break;
		}
	
		printf("Enter hours rate of the worker($00.00):");
		scanf_s("%f", &rate);
		sa = hours * rate;

		printf("Salary is $%0.2f\n\n", sa);
	}
	



	system("pause");
	return 0;
}