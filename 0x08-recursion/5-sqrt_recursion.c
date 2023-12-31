#include "main.h"
#include <stdio.h>

int _find_sqrt(int n, int i);

/**
  * _sqrt_recursion - a function that returns the natural
  * square root of a number
  *
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_find_sqrt(n, 1));
}

/**
  * _find_sqrt - a function that calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _find_sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_find_sqrt(n, i + 1));
}
