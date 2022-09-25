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

	printf("\n%s\n", s1);


	for (i = 0; i < 90; i++)
	{
		*(s1 + i) = *(p + i);
	}

	while (u < 98)
	{
		*(s1 + u) = '\0';

		u++;
	}

	printf("%s%s", s1, p);

	for (u = 0; u < 98; u++)
	{
		if (u % 10)
		{
			printf(" ");
		}

		if (!(u % 10) && u)
		{
			printf("\n");
		}

		printf("0x%02x", s1[u]);
	}

	printf("\n");


	return (0);
}
