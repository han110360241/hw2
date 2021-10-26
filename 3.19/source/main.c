#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float loan, ir, day, ic;
	while(1)
	{
		printf("Enter loan principal(-1 to end): ");
		scanf_s("%f", &loan);
		if (loan == -1)
		{
			break;
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &ir);
		printf("Enter terms of the loan in days: ");
		scanf_s("%f",& day);
		ic = loan * ir * day / 365;
		printf("The interest charge is $%0.2f\n\n",ic);
	}

	






	system("pause");
	return 0;
}