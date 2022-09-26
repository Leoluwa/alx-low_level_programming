#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Segment to return bytes from
 * @accept: The bytes to include
 *
 * Return: The number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int l;
	int m;
	int p;

	p = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] != 32)
		{
			for (m = 0; accept[m] != '\0'; m++)
			{
				if (s[l] == accept[m])
					p++;
			}
		}
		else
			return (p);

	}
	return (p);
}
