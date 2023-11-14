#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


typedef struct specifier{
	char symb;
	char* (*f)(va_list);
} specifier;

int _printf(const char *format, ...);
int check_overflow(char *buff, int len);
char* (*getf(char i))(va_list);
void print_buff(char *buff, int len, va_list args);
char *print_char(va_list list);
char *print_str(va_list args);
char *print_int(va_list args);
char *_itos(int mul, int length, int n);
char *make_buffer(void);

#endif /* _MAIN_H_*/
