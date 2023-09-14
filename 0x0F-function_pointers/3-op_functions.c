#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that returns the sum of two numbers.
 *
 * @a: The first number to add .
 * @b: The second number to add.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the difference of two numbers.
 *
 * @a: The first number to substract.
 * @b: The second number to substract.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the product of two numbers.
 *
 * @a: The first number to multiply.
 * @b: The second number to multiply.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the division of two numbers.
 *
 * @a: The first number or numerator.
 * @b: The second number or denominator.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns the remainder of
 * the division of two numbers.
 *
 * @a: The first number or the numerator.
 * @b: The second number or the denominator.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
