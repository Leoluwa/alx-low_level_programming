#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	long l = 1;
	long k = 2;
	long Sum = 0;
	long Even = 2;

	while (Sum <= 4000000)
	{
			Sum = (k + l);		
			l = k;
			k = Sum;

			if ((Sum  <= 4000000) && ((Sum % 2) == 0))
			{
				Even += Sum;
			}
	}
	printf("%ld\n", Even);


	return (0);
}
