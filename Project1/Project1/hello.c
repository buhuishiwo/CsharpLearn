#include<stdio.h>
int main(void)
{

	int x = 1, Ni = 0, z = 0, N0 = 0, sum = 0, i = 0;
	scanf_s("%d", &N0);
	do
	{
		sum = 0;
		Ni = N0;
		i++;
		do
		{
			z = N0 % 10;
			N0 = N0 / 10;
			sum = z + sum;
		} while (N0 % 10 != 0 && (N0 < 30000));
		x = sum * 3 + 1;
		printf("%d:%d\n", i, x);
		N0 = x;
	} while (Ni != x && (N0 < 30000));
	return 0;
}