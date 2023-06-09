#include "main.h"

/**
 * _pow_recursion - function returning the value of x raised by the power of y
 * @x: a value
 * @y: a value
 * Return: pow_recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{

		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
