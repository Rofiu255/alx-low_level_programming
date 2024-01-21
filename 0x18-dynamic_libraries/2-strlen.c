#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a string to count
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
