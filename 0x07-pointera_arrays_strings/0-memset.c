#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @n: number of bytes to be filled in memory
 * @s: pointer to the memory to be filled
 * @b: byte to filled into memory
 *
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		*(s + l) = b;
	}


	return (s);
}
