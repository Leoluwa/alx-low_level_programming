#include "main.h"

/**
 * _memcpy - Copies n bytes from memory from src to dest
 * @n: number of bytes to copy from src
 * @src: location to copy from
 * @dest: location to copy to
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		*(dest + l) = *(src + l);
	}

	return (dest);
}
