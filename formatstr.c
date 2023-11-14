#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string
 *
 * Return: length of string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, tot_len = 0, i = 0, j = 0;
	char *buff, *str;
	char* (*fun)(va_list);

	if (format == NULL)
		return (-1);

	buff = make_buffer();
	if (buff == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			len = check_overflow(buff, len);
			buff[len++] = format[i];
			tot_len++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				free(buff);
				return (-1);
			}

			if (format[i] == '%')
			{
				len = check_overflow(buff, len);
				buff[len] = format[i];
				tot_len++;
			}
			else
			{
				fun = getf(format[i]);
				if (fun == NULL)
				{
					len = check_overflow(buff, len);
					buff[len++] = '%';
					tot_len++;
					buff[len++] = format[i];
					tot_len++;
				}

				else
				{
					str = fun(args);
					if (str == NULL)
					{
						va_end(args);
						free(buff);
						return (-1);
					}
					if (format[i] == 'c' && str[0] == '\0')
					{
						len = check_overflow(buff, len);
						buff[len++] = '\0';
						tot_len++;
					}

					j = 0;
					while (str[j] != '\0')
					{
						len = check_overflow(buff, len);
						buff[len++] = str[j];
						tot_len++;
						j++;
					}
					free(str);
				}
			}
		}
	}
	print_buff(buff, len, args);
	return (tot_len);
}
