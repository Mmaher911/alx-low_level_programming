#include "main.h"

/**
 * rev_string  - reverce string
 *
 * @s: pointer to the string to print
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string lengthwithou null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string to half */
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array start from 0*/
		s[l - 1 - i] = temp;
	}
}
