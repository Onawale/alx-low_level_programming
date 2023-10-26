#include "main.h"

/**
 * _print_rev_recursion - mainfunction
 *
 * @s: Funtion parameter
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
