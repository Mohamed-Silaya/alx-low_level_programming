#include "main.h"
#include <unistd>
void _puts(char *str)
{
	int x;
	for ( x = 0; str[x] != '\0'; x++ )
	{
		putchar(*str[x]);
	}

	putchar('\n');
}
