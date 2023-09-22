#include <stdio.h>

void __attribute__((constructor)) _print_first(void);

/**
 * _print_firt - Prints a string before the
 *        main function is executed.
 */
void _print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
