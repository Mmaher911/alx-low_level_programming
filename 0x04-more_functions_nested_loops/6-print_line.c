#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: is the number of time
*/

void print_line(int n);
{
	int inchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inchr = 1; inchr <= n; inchr++)
			_putchar('_');
		_putchar('\n');
	}
}
