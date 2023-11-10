#include "variadic_functions.h"

/**
 * print_numbers - print all the parametes.
 * @separator: the number of parameters
 * @n: the number of parameters
 * @... : the integers to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	int i = n;

	if (!n)
	{
		print f("\n");
		return;
	}
	va_start(num, n);
	while (i--)
	{
		printf("%d%s", va_arg(num, int)),
			i ? (separator ? separator : "") : "\n");
	}
	va_end(num);
	printf("\n");
}
