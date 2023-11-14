#include "main.h"

/**
 * rot13 - encryps string with rot13
 * @args: string to change
 *
 * Return: the string
 */

char *rot13(va_list args)
{
	int i = 0, index = 0;
	char *str, *s;

	str = va_arg(args, char *);

	for (index = 0; str[index]; index++)
		;
	s = malloc(sizeof(char) * (index + 1));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm')
			|| (str[i] >= 'A' && str[i] <= 'M'))
			s[i] = str[i] + 13;
		else if ((str[i] >= 'n' && str[i] <= 'z')
			|| (str[i] >= 'N' && str[i] <= 'Z'))
			s[i] = str[i] - 13;
		else
			(s[i] = str[i]);
		i++;
	}
	s[i] = '\0';

	return (s);
}
