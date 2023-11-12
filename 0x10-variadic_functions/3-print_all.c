#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
void print_a_char(va_list arg);
void print_an_int(va_list arg);
void print_a_float(va_list arg);
void print_a_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_a_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void print_a_char(va_list arg)
{
	char letters;

	letters = va_arg(arg, int);
	printf("%c", letters);
}

/**
 * print_an_int - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_an_int(va_list arg)
{
	int nums;

	nums = va_arg(arg, int);
	printf("%d", nums);
}

/**
 * print_a_float - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void print_a_float(va_list arg)
{
	float nums;

	nums = va_arg(arg, double);
	printf("%f", nums);
}

/**
 * print_a_string - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void print_a_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_a_char},
		{"i", print_an_int},
		{"f", print_a_float},
		{"s", print_a_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
