#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - ...
  * @n: ...
  *
  * Return: ...
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(nums, n);

		while (index < n)
		{
			sum += va_arg(nums, int);
			index++;
		}

		va_end(nums);
		return (sum);
	}

	return (0);
}
