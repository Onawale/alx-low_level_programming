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
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
			return (s);
}
