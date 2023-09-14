#include "function_pointers.h"

/**
  * print_name - a function of prints a name
  *
  * @name: The name to prints
  * @f: Pointer to function
  *
  * Return: void return Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
