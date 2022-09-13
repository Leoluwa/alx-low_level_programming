/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include "main.h"

/**
 * _islower - checks if the argument, s is lowercase character.
 * @s: the character to be checked.
 *
 * Return: 1 if l is lowercase.
 *		0 otherwise.
 */
int _islower(int s)
{
	if ((s < 97) || (s > 122))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
