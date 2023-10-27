#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_palindrome(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.

 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);
	int i;
	if (!s)
		return (1);
	for (i = 0; i < length / 2; i++)
	{
		if (s[i] != s[length - i - 1])
		{
			return (0);
			/**
			 * Not a palindrome
			 */
		}
	}
	return (1);/**It's a palindrome */
}

/**
 * _strlen - Calculate the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
