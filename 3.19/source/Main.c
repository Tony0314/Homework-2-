#include<stdio.h>
#include<stdlib.h>

float a,b,c;
int main(void)
{
	while (a != -1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &c);
		printf("The interest charge is:$%.2f\n\n", a*b*c / 365);

	}
	system("pause");
	return 0;

}