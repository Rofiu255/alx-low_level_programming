#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - A program that prints a name
  *
  * @name: The name to prints
  * @f: Pointer to function
  *
  * Return: returns Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
