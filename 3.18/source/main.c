#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	 
	float sa,sales;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &sales);
		if (sales == -1)
		{
			break;
		}
		sa = sales * 0.09 + 200;
		printf("Salary is: %0.2f\n",sa);
		
	}

	
	system("pause");
	return 0;
}