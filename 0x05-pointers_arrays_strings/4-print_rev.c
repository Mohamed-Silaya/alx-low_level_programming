#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int x, j, l;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	l = x;
	for (j = l - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
