#include<stdio.h>
#include<stdlib.h>
float a, b;
int main(void)
{
	while (a != -1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &b);
		printf("Salary is $%.2f\n", a*b);


	}
	system("pause");
	return 0;


}