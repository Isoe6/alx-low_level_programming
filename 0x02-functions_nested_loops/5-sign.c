#include "main.h"
/**
 * print_sign - functions that prints signs.
 * @n: function to be checked
 *
 * Return: 1 0 and -1 on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
