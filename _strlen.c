#include "main.h"

/**
 * _strlen - prints length in in
 * @s: string passed to function
 * Return : a
 */

int _strlen(char *s)
{
	int a = 0;

	while(*(s + a))
		a++;
	return (a);
}
