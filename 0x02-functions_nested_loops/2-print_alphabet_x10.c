#include "main.h"
/**
  * print_alphabet_x10 - print alphabet 10x
  *
  *Return: always 0
  */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}