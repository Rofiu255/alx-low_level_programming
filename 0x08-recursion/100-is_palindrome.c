#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_strlen(char *s);
int findIf_palindrome(char *s, int str_len, int i);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int str_len = 0;

	if (*(s + str_len))
	{
		str_len++;
		str_len += find_strlen(s + str_len);
	}

	return (str_len);
}

/**
 * findIf_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @str_len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int findIf_palindrome(char *s, int str_len, int i)
{
	if (s[i] == s[str_len / 2])
		return (1);

	if (s[i] == s[str_len - i - 1])
		return (findIf_palindrome(s, str_len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 i*         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int str_len = find_strlen(s);

	if (!(*s))
		return (1);

	return (findIf_palindrome(s, str_len, i));
}
