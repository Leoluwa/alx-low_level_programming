#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int l;
	int k;

	l = 98;

	k = 42;

	printf("a=%d, b=%d\n", l, k);

	swap_int(&l, &k);

	printf("a=%d, b=%d\n", l, k);


	return (0);
}
