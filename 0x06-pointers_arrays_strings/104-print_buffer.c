#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int o = 0;

	while (o < size)
	{
		int j = (size - o < 10) ? (size - o) : 10;

		printf("%08x: ", o);

		for (int i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf("  ");

			if (i % 2)
				printf(" ");
		}

		for (int i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 126)
				c = '.';

			printf("%c", c);
		}

		printf("\n");
		o += 10;
	}
}
