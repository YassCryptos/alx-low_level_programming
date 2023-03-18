#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: End Of Programme
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
