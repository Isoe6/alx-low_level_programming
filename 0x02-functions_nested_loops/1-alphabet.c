#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
		_putchar(r);

	_putchar('\n');
}
