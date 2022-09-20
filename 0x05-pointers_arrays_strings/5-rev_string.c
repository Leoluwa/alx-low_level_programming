#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverses strings.
 * @arr: - pointer to the string to be reversed.
 *
 * Return: Nothing.
 */
void  rev_string(char *arr)
{
	int Counter;
	int Count;
	int y;
	char *u;
	char *p;

	for (Count = 0; (*(arr + Count) != '\0'); )
	{
		Count++;
	}

	u = (char *) malloc((Count + 1));

	for (y = (Count - 1), Counter = 0; Counter < (Count); y--, Counter++)
	{
		*(u + Counter) = *(arr + y);
	}

	p = arr;

	for (Counter = 0; Counter < Count; Counter++)
	{
		*(p + Counter) = *(u + Counter);
	}
}
