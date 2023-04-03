#include "main.h"
/**
 * _memset - fill a block of the memory
 * @s: starting address of the memory
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: Always value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
