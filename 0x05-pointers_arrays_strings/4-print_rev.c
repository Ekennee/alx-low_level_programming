#include "main.h"
/**
 * print_rev - print in reverse
 * 
 * @s - pointer
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c])
	c++;
	while (c--)
		_putchar(s[c]);
	_putchar('\n');
}
