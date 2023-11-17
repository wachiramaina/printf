#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifier - a struct
 * @symb: the specifier character
 * @f: ponter to convert specified data to string
 */
typedef struct specifier
{
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
char *rot13(va_list args);
char *int_binary(va_list args);
char *str_rev(va_list args);
int str_len(char *s);
#endif /* _MAIN_H_*/
