#include "main.h"

/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s)
{
	int x = 0;
	if (*s != '\0')
		x++;
	return x;
}
