#include <unistd.h>

/**
 * _putchar - write the character cto stdout
 * @c: the character to print
 *
 * Return: on on success 1.
 * on error, -1 is returned, and errnois not appropriately.
*/

int _putchar(char c)
{
	return (write (1, &c, 1));
}
