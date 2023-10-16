#include "main.h"

/**
 * _strlen  - return the length og a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
