#include <stdio.h>
#include <stdlib.h>
int main()
{
	int breadth, length, i, j;
	printf("Enter the breadth:");
	scanf_s("%d", &breadth);
	printf("Enter the length:");
	scanf_s("%d", &length);
	for (i = 0; i < breadth; i++)
	{
		for (j = 0; j < length; j++)
		{
			if ((i == 0) || (i == breadth - 1) || (j == 0) || (j == length - 1))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
