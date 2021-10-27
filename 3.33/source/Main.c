#include<stdio.h>
#include<stdlib.h>
int a, b;
int aa, bb;
int main(void)
{
	printf("Enter Long:");
	scanf_s("%d", &bb);
	printf("Enter Breadth:");
	scanf_s("%d", &aa);
	for (a = 0; a < aa; a++)
	{
		for (b = 0; b < bb; b++)
		{
			if (a == 0 || a == (aa - 1) || b == 0 || b == (bb - 1))
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}