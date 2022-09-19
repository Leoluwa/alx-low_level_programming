#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int h;

	h = 402;
	printf("n=%d\n", h);
	reset_to_98(&h);
	printf("n=%d\n", h);

	return (0);
}
