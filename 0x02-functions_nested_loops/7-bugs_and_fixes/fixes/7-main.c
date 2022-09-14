#include "main.h"
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int l;

	print_last_digit(98);

	print_last_digit(0);

	l = print_last_digit(-1024);

	_putchar('0' + l);

	_putchar('\n');


	l = print_last_digit(INT_MIN);

	_putchar('0' + l);

	_putchar('\n');

	
	/*l = print_last_digit(-2147483648 );

	_putchar('0' + l);

	_putchar('\n');*/


	return (0);
}
