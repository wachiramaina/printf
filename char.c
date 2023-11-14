#include "main.h"

/**
  *print_char - returns char as string
  *@list: char
  *Return: string
  */

char *print_char(va_list list)
{
	char *str;
	char x;

	x = va_arg(list, int);

	if (x == 0)
		x = '\0';

	str = malloc(sizeof(char) * 2);

	if (str == NULL)
		return (NULL);

	str[0] = x;
	str[1] = '\0';

	return (str);
}
