#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * Return: Nothing
 *
 */

int main(void)
{
	char s1[98];
	char *p;
	int i;
	int u;

	for (i = 0; i < (98 - 1); i++)
	{
		s1[i] = '*';
	}

	s1[i] = '\0';

	printf("%s", s1);
	
	p = "First, solve the problem. Then, write the code\n";


	u = 0;
	
	while (*(p + u) != '\0')
	{
		u++;
	}

	for (i = 0; i < 5; i++)
	{
		*(s1 + i) = *(p + i);
	}

	s1[(98 -1)] = '\0';

	printf("\n%s\n\nHey\n", s1);

	for (i = 0; i < 90; i++)
	{
		printf("for\n");
		*(s1 + i) = *(p + i);
	}

	printf("out\n");

	while (u < 98)
	{
		*(s1 + u) = '\0';

		u++;
	}

	printf("\n%s\n", s1);

	for (u = 0; u < 98; u++)
	{
		printf("0x%02x\n", s1[u]);
	}

	printf("\n");


	return (0);
}
