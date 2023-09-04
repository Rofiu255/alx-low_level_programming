#include "main.h"

int to_find_strlen(char *s);
int check_palindrome(char *s, int str_len, int index);
int is_palindrome(char *s);

/**
 * to_find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: return the length of the string.
 */
int to_find_strlen(char *s)
{
	int str_len = 0;

	if (*(s + str_len))
	{
		str_len++;
		str_len += to_find_strlen(s + str_len);
	}

	return (str_len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @str_len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int str_len, int index)
{
	if (s[index] == s[str_len / 2])
		return (1);

	if (s[index] == s[str_len - index - 1])
		return (check_palindrome(s, str_len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int str_len = to_find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, str_len, index));
}
