#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *str_duplicate;
	int i, str_len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str_len++;

	str_duplicate = malloc(sizeof(char) * (str_len + 1));

	if (str_duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str_duplicate[i] = str[i];

	str_duplicate[str_len] = '\0';

	return (str_duplicate);
}
