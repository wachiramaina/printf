#include "main.h"

/**
 * itoO - change int to octal
 * @list: to be changed
 * Return: octal string
 */

char *itoO(va_list list)
{
	int j = 0, eight = 1;
	int i, v;
	char *s;

	v = va_arg(list, int);
	i = v;

	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (NULL);

	if (v < 0)
	{
		s[0] = 1 + '0';
		j++;
		v *= -1;
		i *= -1;
	}

	while (v > 1)
	{
		v /= 8;
		eight *= 8;
	}

	while (eight > 0)
	{
		s[j++] = (i / eight + '0');
		i %= eight;
		eight /= 8;
	}
	s[j] = '\0';
	return (s);
}
