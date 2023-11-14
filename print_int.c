#include "main.h"

/**
 * print_int - changes int to str
 * @args: finds the length for itos
 *
 * Return: integer string
 */

char *print_int(va_list args)
{
	int len, div, num, tem;

	num = va_arg(args, int);
	tem = num;
	len = 0;
	div = 1;

	if (num == 0)
	{
		len++;
		return (_itos(div, len, num));
	}

	while (tem != 0)
	{
		len += 1;
		if (len > 1)
			div *= 10;
		tem /= 10;
	}

	return (_itos(div, len, num));
}
