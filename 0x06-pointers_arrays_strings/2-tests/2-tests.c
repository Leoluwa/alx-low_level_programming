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
	char tik[11];
	char s1[98];
	char *ptr;
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

	ptr= "Kayode";

	u = 0;

	while (*(ptr + u) != '\0')
	{
		u++;
	}

	printf("\n\t%d\t%c ~ %d\n\n", u, *(ptr + (u - 1)), (u - 1));

	for (i = 0; i < u; i++)
	{
		*(tik + i) = *(ptr + i);
	}

	printf("\n%s\n", tik);

	for ( ; u < 11; u++)
	{
		*(tik + u) = '\0';
	}


	i = 0;
	
	while(*(p + i) != '\0')
	{
		i++;
	}

	printf("\n !\t%d\t%c ~ %d\n\n", i, *(p + (i - 1)), (i - 1));
	
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

	s1[(98 -1)] = '\0';

	printf("\n%s\n", s1);

	printf("\n0x%02x\n", s1[0]);

	printf("\n%s\n", ptr);

	for (i = 0; (*(ptr + i) != '\0'); i++)
	{
		printf("\n %d ~ %c\t0x%02x\n", i, *(ptr + i), *(ptr + i));
	}

	for (i = 0; (i < 11); i++)
	{
		printf("\n %d ~ %c\t0x%02x\n", i, *(tik + i), *(tik + i));
	}


	return (0);
}
