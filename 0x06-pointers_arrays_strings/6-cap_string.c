#include "main.h"
#define	Alph	26
#define Abet	13
/**
 * cap_string - Capitalizes all words of a string.
 * @str: pointer to the argument string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int u;
	int k;
	int i;
	int l;
	int m;
	char lower[Alph];
	char upper[Alph];
	char Separator[Abet] = {'\t', '\n', ' '};
	char *Separats = ",.;!?(){}";

	for (m = 0, l = 3; ((l < Abet) && (m < 9)); m++, l++)
	{
		Separator[l] = *(Separats + m);
	}
	l = 0;
	while (*(str + l) != '\0')
	{
		l++; }
	for (i = 65, u = 0; i <= 90; i++, u++)
	{
		upper[u] = i; }
	for (k = 97, u = 0; k <= 122; k++, u++)
	{
		lower[u] = k; }
	for (u = 1; u < l; u++)
	{
		for (i = 0; i < 10; i++)
		{
			if (*(str + u) == *(Separator + i))
			{
				for (k = 0; k < 26; k++)
				{
					if (*(str + (u + 1)) == lower[k])
					{
						*(str + (u + 1)) = upper[k];
					} } } } }
	return (str); }
