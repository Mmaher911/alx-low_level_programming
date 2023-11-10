#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parametes.
 * @n: the number of parameters
 * @...: the integers to sum
 *
 * Return: this return the sum of the parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n);
	while (i--)
	{
		s += va_arg(ap, int);
	}
	va_end(ap);
	return (s);
}
