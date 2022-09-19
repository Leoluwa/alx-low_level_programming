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

	printf("\n\t%ld\t%ld\t%ld\n\n", l, k, Sum);

	while (Sum <= 4000000)
	{
			Sum = (k + l);		
			l = k;
			k = Sum;

		printf("\n\t%ld\t%ld\t%ld\n\n", l, k, Sum);

			if ((Sum  <= 4000000) && ((Sum % 2) == 0))
			{
				printf("\t~ %ld\n", Even);

				Even += Sum;

				printf("\t~ %ld\n", Even);
			}
	}

	printf("%ld\n", Even);


	return (0);
}
