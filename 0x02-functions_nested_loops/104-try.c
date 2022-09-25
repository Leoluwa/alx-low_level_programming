#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int Count;
	double Sum;
	double l = 1;
	double k = 2;
/*	unsigned long fib[6] = {9740274219868223167, 31940434634990099905, 51680708854858323072, 83621143489848422977, 135301852344706746049, 218922995834555169026};*/

	for (Count = 1 ; Count <= 98; Count++)
	{
		if (Count <= 2)
		{
			printf("%d", Count);
		}
		else
		{
		/*	if (Sum < fib[0])*/
		/*	{*/
				Sum = (k + l);
				printf("%.lf", Sum);
				l = k;
				k = Sum;
		/*	}
			else
			{
				printf("%lu", fib[Counter]);
			}*/
		}

		if (Count < 98)
		{
			printf(", ");
		}
	}

	printf("\n");


	return (0);
}
