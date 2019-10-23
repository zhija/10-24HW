#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int hours=0;
	float rate, salary;
	
	while (hours != -1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &rate);
		
		if (hours > 40)
			salary=(hours* rate) + (rate * 0.5);
		else
			salary=hours* rate;
		printf("salary is $%.2f\n", salary);
		

	}

	system("pause");
	return 0;
}