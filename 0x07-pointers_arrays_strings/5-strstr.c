#include "main.h"
#include <stdlib.h>

/**
* _strstr - locates a substring
* @wobi: main string to search in
* @sub: substring to search for in the main string
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *wobi, char *sub)
{
	int l;
	int k;

	k = 0;

	while (sub[k] != '\0')
	{
		k++;
	}

	while (*wobi)
	{
		for (l = 0; sub[l]; l++)
		{
			if (wobi[l] != sub[l])
			{
				break;
			}
		}

		if (l != k)
		{
			wobi++;
		}
		else
		{
			return (wobi);
		}
	}


	return (NULL);
}
