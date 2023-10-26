#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial of a number
 * @n: the number for which to calculate the factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
