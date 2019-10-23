#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	float balance, charges, credits, limit, new_balance;	
	a:
	printf("Enter account number (-1 to end):");
	scanf_s("%d", &number);
	while (number!=-1)
	{
		printf("Enter beginnig balance:");
		scanf_s("%f", &balance);
		printf("Enter total cahrges:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);
		new_balance = balance + charges - credits;
		if (new_balance > limit)
		{
			printf("Account:%d\n", number);
			printf("credit limit:%.2f\n", limit);
			printf("Balance:%.2f\n", balance);
			printf("credit limit exceeded\n");
		}
		else
		{
			goto a;
		}
	}
	system("pause");
	return 0;
}