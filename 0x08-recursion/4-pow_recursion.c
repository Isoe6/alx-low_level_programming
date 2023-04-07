#include "main.h"

/**
 *  _pow_recursion - main function
 *@x: int to power
 *@y: power
 *Return: intger
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
