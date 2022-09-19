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
	unsigned long Sum;
	unsigned long l = 1;
	unsigned long k = 2;

	for (Count = 1 ; Count <= 98; Count++)
	{
		if (Count <= 2)
		{
			printf("%d", Count);
		}
		else
		{
			Sum = (k + l);
			printf("%lu", Sum);
			l = k;
			k = Sum;
		}

		if (Count < 98)
		{
			printf(", ");
		}
	}

	printf("\n");


	return (0);
}
