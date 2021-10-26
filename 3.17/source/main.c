#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	while (1)
	{
		int an, cl;
		float bb, tcr, tch,b;
		printf("Enter account number(-1 to end): ");
		scanf_s("%d", & an);
		if (an == -1)
		{
			break;
		}
		printf("Enter beginning balance :");
		scanf_s("%f", &bb);
		fflush(stdin);
		printf("Enter total charge :");
		scanf_s("%f", &tch);
		fflush(stdin);
		printf("Enter total credit :");
		scanf_s("%f", &tcr);
		fflush(stdin);
		printf("Enter credit limit :");
		scanf_s("%d", &cl);
		fflush(stdin);
		b = bb + tcr;
		if ((bb + tcr) > cl)
		{
			printf("Acount:      %d\n", an);
			printf("Credit limit:%d\n", cl);
			printf("Balance:     %f\n",b );
			printf("Credit Limit Exceeded\n\n");
		}
		fflush(stdin);
	}
	








	system("pause");
	return 0;
}