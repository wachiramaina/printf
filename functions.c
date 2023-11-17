#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
  *make_buffer - to allocate size to buffer
  *Return: pointer to buffer created
  */

char *make_buffer(void)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (NULL);
	return (buff);
}

/**
  *check_overflow - checks if buffer size is fully occupied.
  *@buff: pointer to buffer
  *@len: length of string in buffer
  *Return: len
  */

int check_overflow(char *buff, int len)
{
	if (len > 1020)
	{
		write(1, buff, len);
		len = 0;
	}
	return (len);
}


/**
  *getf - return needed function
  *@i: parameter
  *Return: pointer to function
  */

char* (*getf(char i))(va_list)
{
	int k = 0;

	specifier symbol[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'b', int_binary},
		{'R', rot13},
		{'r', str_rev},
		/* {'o', itoO}, */
		{'\0', NULL}
	};

	while (symbol[k].symb != '\0')
	{
		if (symbol[k].symb == i)
			return (symbol[k].f);
		k++;
	}
	return (NULL);
}


/**
  *print_buff - prints buffer, then frees it and frees va_list
  *@buff: string
  *@len: length of string
  *@args: number of arguments
  */

void print_buff(char *buff, int len, va_list args)
{
	write(1, buff, len);
	free(buff);
	va_end(args);
}
