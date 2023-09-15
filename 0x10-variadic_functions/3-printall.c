#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_char_form(va_list arg);
void print_int_form(va_list arg);
void print_float_form(va_list arg);
void print_string_form(va_list arg);
void print_all(const char * const format, ...);

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
	int index = 0, j = 0;
	char *separator = "";

	print_t format_funcs[] = {
		{"c", print_char_form},
		{"i", print_int_form},
		{"f", print_float_form},
		{"s", print_string_form}
	};

	va_start(args, format);

	while (format && (*(format + index)))
	{
		j = 0;

		while (j < 4 && (*(format + index) != *(format_funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			format_funcs[j].print(args);
			separator = ", ";
		}

		index++;
	}

	printf("\n");

	va_end(args);
}

/**
 * print_char_form - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char_form(va_list arg)
{
	char Alpha;

	Alpha = va_arg(arg, int);
	printf("%c", Alpha);
}

/**
 * print_int_form - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int_form(va_list arg)
{
	int numbers;

	numbers = va_arg(arg, int);
	printf("%d", numbers);
}

/**
 * print_float_form - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float_form(va_list arg)
{
	float float_num;

	float_num = va_arg(arg, double);
	printf("%f", float_num);
}

/**
 * print_string_form - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string_form(va_list arg)
{
	char *strings;

	strings = va_arg(arg, char *);

	if (strings == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", strings);
}
