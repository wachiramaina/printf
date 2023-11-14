#include "main.h"

/**
  *_itos - makes an int a string
  *@mul: multiple of 10
  *@length: length of number
  *@n: number to convert to string
  *Return: string
  */

char *_itos(int mul, int length, int n)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * length + 2);
	if (str == NULL)
		return (NULL);

	if (n < 0)
	{
		str[0] = '-';
		i++;
	}

	while (n < 0)
	{
		str[i] = ((n / mul) * -1 + '0');
		n = n % mul;
		mul /= 10;
		i++;
	}

	while (n >= 1)
	{
		str[i] = ((n / mul) + '0');
		n = n % mul;
		mul /= 10;
		i++;
	}

	str[i] = '\0';
	return (str);
}
