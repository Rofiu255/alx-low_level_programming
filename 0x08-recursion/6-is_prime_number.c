#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int findIf_prime(int n, int i);

/**
  * is_prime_number - a program that returns if a number is prime
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (findIf_prime(n, 1));
}

/**
  * findIf_prime - a function that check if number is prime
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int findIf_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (findIf_prime(n, i + 1));
}
