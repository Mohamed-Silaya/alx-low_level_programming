#include "main.h"
void print_rev(char *s)
{
	int x,j;

	for (x = 0; s[x] != '\0'; x++)
	{}
	for (j = x-1; j<=0 ;j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}	
