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
	int last_digit; /* i wrote this too*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	/*
	 * I wrote from here
	 *
	 */
	last_digit = (n % 10);

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0 and is %d\n", n, last_digit);
	}
	/*
	 * I wrote uptill here
	 *
	 */


	return (0);
}
