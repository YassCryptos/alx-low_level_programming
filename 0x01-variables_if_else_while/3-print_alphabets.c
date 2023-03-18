#include <stdio.h>

/**
 * main - write lower and uppercase alphabet
 *
 * Return: 0 (End Of Programme)
 *
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
