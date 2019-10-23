#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float sales_in_dollars, salary;
	a:
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &sales_in_dollars);
	if (sales_in_dollars == -1)
	{
		system("pause");
	}
	else
	{
		salary = 200 + sales_in_dollars * 0.09;
		printf("salary is:$%.2f\n", salary);
		goto a;
	}
	system("pause");
	return 0;
}