#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @n: bytes of the memory area
 * @b: memory pointer
 * @s: constant byte
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}

	return (s);
}
