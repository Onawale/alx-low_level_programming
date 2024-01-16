#include "main.h"

/**
 * _memcpy - main function prototype
 * @src: Source parameter
 * @n: function parameter
 * @dest: Destination parameter
 * Return: Copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
