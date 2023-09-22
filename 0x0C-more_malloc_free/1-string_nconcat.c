#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that oncatenates two strings using at
 *                  most an inputted number of bytes.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The max. number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int str_len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		str_len++;

	concat = malloc(sizeof(char) * (str_len + 1));

	if (concat == NULL)
		return (NULL);

	str_len = 0;

	for (i = 0; s1[i]; i++)
		concat[str_len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[str_len++] = s2[i];

	concat[str_len] = '\0';

	return (concat);
}
