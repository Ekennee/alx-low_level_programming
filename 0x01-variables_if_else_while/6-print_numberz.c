#include <stdio.h>
/**
*main - funtion begins
*
*Return: function ends
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');

	return (0);
}
