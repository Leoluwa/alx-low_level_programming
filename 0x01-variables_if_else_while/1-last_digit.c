/*
 * I am at peace just for the sake of it :)
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
	int last; /* i wrote this too*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	/*
	 * I wrote from here
	 *
	 */
	last = (n % 10); /* last store the last digit*/

	if ((last > 5) && (last != 0))
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, last, last);
	}
	else if ((last < 6) && (last != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	/*
	 * I wrote uptill here
	 *
	 */


	return (0);
}
