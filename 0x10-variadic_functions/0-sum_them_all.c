#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of paramters passed to the function
 * @...: A variable number of parameters to claculate the sum of.
 * Return: IF n ==0 -0.
 * otherwise - sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int 1, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
