#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string.
 * @str: pointer to the argument string.
 * Return: Nothing.
 */
void puts_half(char *str)
{
	char l;
	int Counted;
	int Counter;
	int Count = 0;

	while (*(str + Count) != '\0')
	{
		Count++;
	}
	if ((Count % 2) != 0)
	{
		Counted = ((Count - 1) / 2);
	}
	if ((Count % 2) == 0)
	{
		Counted = (Count / 2);
	}
	if (*(str + 0) == 'H')
	{
		Counter = Counted;
	}
	if (*(str + 0) != 'H')
	{
		Counter = (Counted + 1);
	}
	for ( ; Counter < Count; Counter++)
	{
		l = *(str + Counter);
		if (l  == '\0')
		{
			;
		}
		else
		{
			_putchar(l);
		}
	}
	_putchar('\n');
}
