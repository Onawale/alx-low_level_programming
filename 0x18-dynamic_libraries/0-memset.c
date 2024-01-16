#include "main.h"

/**
 * _memset - main function of the prototype
 *
 * @b: The value used to fill memory
 *
 * @s: Function parameter
 * @n: Function parameter
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
