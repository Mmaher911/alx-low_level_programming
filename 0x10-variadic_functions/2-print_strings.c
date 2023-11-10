#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: the number of parameters
 * @n: the number of strings
 * @...: the string to print
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *str;

	va_start(str, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(str, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(str);
}
