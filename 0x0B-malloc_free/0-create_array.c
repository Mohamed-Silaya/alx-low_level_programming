#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	return (NULL);

	ar = (char *) malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}

	ar[i] = '\0';
	return (ar);
}
