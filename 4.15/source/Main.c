#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int i;
	double interest, rate;
	for (rate = 10; rate <= 12; rate += 0.5)
	{
		for (i = 1; i <= 15; i++)
		{
			interest = 5000 * pow(1.0 + (rate / 100.0), i);
		}
		printf("���5000���A�p�G�Q�v�O%.1f%%,15�~��i�H�`�@�o��:%1.2f\n", rate, interest);
	}
	system("pause");
	return 0;
}