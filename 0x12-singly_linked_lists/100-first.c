#include <stdio.h>

void first_func(void)__attribute__((constructor));

/**
 * first_func - prints a given statement
 */
void first_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
