#include "main.h"

/**
 * _puts_recursion - prints a string in addition to a  new putchar
 * @s: pointer block of the memory to fill
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
