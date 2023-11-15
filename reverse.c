#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @list: string to reverse
 * Return: string
 */

char *rev_string(va_list list)
{
	char *rev;
	char *str;
	int i = 0, j, len;

	str = va_arg(list, char *);
	if (str == NULL)
		str = NULL;
	len = _strlen(str);

	rev = malloc(sizeof(char) * (len + 1));
	if (rev == NULL)
		return (NULL);

	for (j = (len - 1); j >= 0; j--)
	{
		rev[i++] = str[j];
	}
	rev[i] = '\0';
	return (rev);
}
