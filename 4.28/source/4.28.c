#include<stdio.h>
#include<stdlib.h>



int main(void) {
	while (1)
	{
		int type = 0;
		printf("�п�J�~��N�X(-1 to end) : ");
		scanf_s("%d", &type);
		if (type == -1)break;
		float salary, hours, sum = 0;
		switch (type)
		{
		case 1:

			printf("�п�J�g�~ : ");
			scanf_s("%f", &salary);
			printf("�g�~��$%2lf", salary);
			break;
		case 2:

			printf("�п�J���~ : ");
			scanf_s("%f", &salary);
			printf("�п�J�ɼ� : ");
			scanf_s("%f", &hours);

			if (hours > 40)
			{
				sum = 40 * salary + 1.5 * (hours - 40) * salary;
			}
			else
			{
				sum = salary * hours;
			}

			printf("�g�~��$%.2lf", sum);
			break;
		case 3:

			printf("�п�J��g�P����B : ");
			scanf_s("%f", &salary);
			printf("�g�~��$%.2lf", salary * 0.057 + 250);
			break;
		case 4:

			printf("�п�J�Ͳ���� : ");
			scanf_s("%f", &sum);
			printf("�п�J���S�� : ");
			scanf_s("%f", &salary);
			printf("�g�~��$%.2lf", sum * salary);
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