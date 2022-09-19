#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int j;
	int Sum = 0;

	for (j = 0; j < 1024; j++)
	{

		if (((j % 3) == 0) || ((j % 5) == 0))
			Sum += j;
	}

	printf("%d\n", Sum);


	return (0);
}
