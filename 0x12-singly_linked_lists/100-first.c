#include <stdio.h>

void myFunction(void) __attribute__((constructor));

/**
 * myFunction - print a sentence  before the main function
 * function is executed
 */

void myFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
