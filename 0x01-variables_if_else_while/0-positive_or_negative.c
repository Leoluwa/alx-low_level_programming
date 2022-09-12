/*
 * I am at Peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include "time.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * I wrote from here
	 *
	 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else if (n == 0)
			{
				printf("%d is zero\n", n);
			}
			/*
			 * I wrote uptill here
			 *
			 */

	return (0);
}
