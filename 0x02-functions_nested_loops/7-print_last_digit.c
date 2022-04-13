#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int y;

	y = (n % 10);

	if (y < 0)
	{
		y = (-1 * y);
	}
		_putchar(y + '0');
		return (y);
}
