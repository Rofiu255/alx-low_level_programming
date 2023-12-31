#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int strlen_count_wilds(char *str);
void iter_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_count_wilds - The function returns the length of a string,
 *                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * Return: The length.
 */
int strlen_count_wilds(char *str)
{
	int len = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			len++;

		i++;
		len += strlen_count_wilds(str + i);
	}

	return (len);
}

/**
 * iter_wild - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 * @wildstr: The string to be iterated through.
 */
void iter_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iter_wild(wildstr);
	}
}

/**
 * postfix_match - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_count_wilds(str) - 1;
	int postfix_len = strlen_count_wilds(postfix) - 1;

	if (*postfix == '*')
		iter_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iter_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
