#include<stdio.h>
#include<stdlib.h>



int main(void) {
	while (1)
	{
		int type = 0;
		printf("請輸入薪資代碼(-1 to end) : ");
		scanf_s("%d", &type);
		if (type == -1)break;
		float salary, hours, sum = 0;
		switch (type)
		{
		case 1:

			printf("請輸入週薪 : ");
			scanf_s("%f", &salary);
			printf("週薪為$%2lf", salary);
			break;
		case 2:

			printf("請輸入時薪 : ");
			scanf_s("%f", &salary);
			printf("請輸入時數 : ");
			scanf_s("%f", &hours);

			if (hours > 40)
			{
				sum = 40 * salary + 1.5 * (hours - 40) * salary;
			}
			else
			{
				sum = salary * hours;
			}

			printf("週薪為$%.2lf", sum);
			break;
		case 3:

			printf("請輸入當週銷售金額 : ");
			scanf_s("%f", &salary);
			printf("週薪為$%.2lf", salary * 0.057 + 250);
			break;
		case 4:

			printf("請輸入生產件數 : ");
			scanf_s("%f", &sum);
			printf("請輸入單件酬勞 : ");
			scanf_s("%f", &salary);
			printf("週薪為$%.2lf", sum * salary);
			break;

		default:
			printf("Error\n");
			break;
		}
		printf("\n");

	}

	system("pause");
	return 0;


}