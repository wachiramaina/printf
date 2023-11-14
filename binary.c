#include "main.h"

/**
 * int_binary _ changes int to binary
 * @args: the int argument
 *
 * Return: binary string
 */

char *int_binary(va_list args)
{
	int j = 0, two = 1, i, b;
	char *s;

	b = va_arg(args, int);
	i = b;

	/* the max number of int in binary*/
	s = malloc(sizeof(char) * 33);
	if (s == NULL)
		return (NULL);

	if (b < 0)
	{
		s[0] = 1 + '0';
		j++;
		b *= -1;
		i *= -1;
	}

	while (b > 1)
	{
		b /= 2;
		two *= 2;
	}

	while (two > 0)
	{
		s[j++] = (i / two + '0');
		i %= two;
		two /= 2;
	}
	s[j] = '\0';

	return (s);
}
