#include "main.h"

/**
 *swap_int - swaps value of two integers
 *@a: intger 1
 *@b: integer 2
 *
 *Return: 0 on success
 */

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
