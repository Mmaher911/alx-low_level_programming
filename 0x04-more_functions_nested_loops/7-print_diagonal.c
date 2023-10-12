#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of time
*/

void print_diagonal(int n);
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (postn = 1; postn <= n; postn++)
			_putchar('_');
		_putchar(92);
		_putchar('\n');
		}
	}
}
