#include "main.h"

/**
 * print_array - This function print n element of integers
 * @a: array to be used
 * @n: number of element to be printed
 * Reture: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	printf("\n");
}
