/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include <unistd.h>
/**
 * _putchar - writes the character p to stdout
 * @p: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int _putchar(char p)
{
	return (write(1, &p, 1));
}
