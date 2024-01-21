#include "main.h"

/**
  * _strstr - a function that locate a substring
  * @haystack: the major string to search
  * @needle: the substring to find
  *
  * Return: char value containing the substring
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, n = 0;

	while (haystack[i])
	{
		while (needle[n])
		{
			if (haystack[i + n] != needle[n])
			{
				break;
			}

			n++;
		}

		if (needle[n] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
