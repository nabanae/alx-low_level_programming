#include <stdio.h>
/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = a; b < 58; b++)
		{
			if (a == b)
			{
				continue;
			}

			putchar(a);
			putchar(b);

			if (a == 56 && b == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
