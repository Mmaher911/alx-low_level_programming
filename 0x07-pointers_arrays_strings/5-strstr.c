#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Write a function that locates a substring
 *
 * @needle: constant
 * @haystack: substring
 *
 * Return: nothing
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *haystack_ptr = haystack;
			char *needle_ptr = needle;

			while (*haystack_ptr == *needle_ptr && *haystack_ptr != '\0')
			{
				haystack_ptr++;
				needle_ptr++;
			}
			if (*needle_ptr == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return ('\0');
}
