#include "main.h"

/**
 * str_rev - reverses a string
 * @args: the string to reverse
 *
 * Retrun: reversed string
 */

char *str_rev(va_list args)
{
	char *rev;
	char *str;
	int i = 0, length, j;

	str = va_arg(args, char *);
	if (str == NULL)
		str = ")llun(";

	length = str_len(str);

	rev = malloc(sizeof(char) * (length + 1));
	if (rev == NULL)
		return (NULL);

	for (j = (length - 1); j >= 0; j--)
		rev[i++] = str[j];

	rev[i] = '\0';

	return (rev);
}

/**
 * str_len - finds length of a str
 * @s: string
 *
 * Return: length of the string
 */

int str_len(char *s)
{
	int len = 0;

	while(*(s + len))
		len++;

	return (len);
}
