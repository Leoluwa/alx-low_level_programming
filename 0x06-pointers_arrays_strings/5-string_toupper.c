#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @l: pointer to the string
 *
 * Return: pointer to the string.
 */

char *string_toupper(char *l)
{
	int letter;
	int Counter;
	int lower[26];
	int upper[26];
	int Count;
	int Counting = 0;

	while (*(l + Counting) != '\0')
	{
		Counting++;
	}

	for (letter = 97, Count = 0; Count < 26; letter++, Count++)
	{
		lower[Count] = letter;
	}

	for (letter = 65, Count = 0; Count < 26; letter++, Count++)
	{
		upper[Count] = letter;
	}

	Count = 0;

	while (((*(l + Count) >= 65) || (*(l + Count) <= 90)) && (Count < Counting))
	{
		for (Counter = 0; Counter < 26; Counter++)
		{
			if (*(l + Count) == lower[Counter])
			{
				*(l + Count) = upper[Counter];
			}
		}

		Count++;
	}


	return (l);
}
