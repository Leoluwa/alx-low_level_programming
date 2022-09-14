/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include "main.h"

/**
 * _isalpha - checks if the argument, s is an alphabetic character.
 * @s: the character to be checked.
 *
 * Return: 1 if s is an alphabetic chracter, lowercase or uppercase.
 *		0 otherwise.
 */
int _isalpha(int s)
{
	if (((s >= 97) && (s < 122)) || ((s <= 122) && (s > 97)))
	{
		return (1);
	}
	else if (((s >= 65) && (s < 90)) || ((s <= 90) && (s > 65)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
