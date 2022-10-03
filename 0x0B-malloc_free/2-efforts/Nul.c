#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* char *str_concat(char *, char *);*/

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Hello", NULL);

	puts("\ns = str_concat(\"Hello\", NULL\n");

	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

    s = str_concat(NULL, "Hello");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

    s = str_concat(NULL, NULL);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	puts("\nBefore return (0);\n");

	return (0);
}
