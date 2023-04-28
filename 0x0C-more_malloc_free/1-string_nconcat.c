#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		m = malloc(sizeof(char) * (len1 + n + 1));
	else
		m = malloc(sizeof(char) * (len1 + len2 + 1));
	
	if (!m)
		return (NULL);

	while (i < len1)
	{
		m[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		m[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		m[i++] = s2[j++];

	m[i] = '\0';

	return (s);
}

