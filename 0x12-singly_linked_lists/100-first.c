#include "lists.h"

void _constructor(void) __attribute__((constructor));
/**
 * _constructor - function with constructor
 *
 * Description: print string
 * Return: na
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
