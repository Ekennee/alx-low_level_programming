#include <stdio.h>
/**
 * main - function begins.
 *
 * Return: Always 0.
 */
int main(void)
{
	for(int x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x));
		putchar('\n');
	}
	return (0);
}
