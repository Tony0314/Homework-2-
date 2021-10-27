#include<stdio.h>
#include<stdlib.h>
float m;
int main (void)
{
	while (m != -1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &m);
		if (m == -1)
			break;
		printf("Salary is :%.2f\n", (200 + (m*0.09)));
	}
		system("pause");
		return 0;
}