#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


typde struct specifier{
	char symb,
	char* (*f)(va_list),
};

int _printf(const char *format, ...);

#endif /* _MAIN_H_/
