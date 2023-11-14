#include "main.h"

/**
 * print_str - takes a str and returns an str
 * @args: string
 *
 * Return: string
 */

char *print_str(va_list args)
{
	char *s;
	char *p;
	int index = 0, i;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		index++;
	}

	p = malloc(sizeof(char) * (index + 1));
	if (p == NULL)
		return (NULL);

	index = 0;
	for (i = 0; s[i]; i++)
	{
		p[index++] = s[i];
	}

	return (p);
}
