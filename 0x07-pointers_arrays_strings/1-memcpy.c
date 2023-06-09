#include "main.h"


/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination address
 * @src: the source address
 * @n: number of times to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
