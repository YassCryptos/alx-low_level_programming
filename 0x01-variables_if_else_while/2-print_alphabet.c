#include <stdio.h>

/**
 * main - Lowercase & Uppercase
 *
 * Return: 0 (End of project)
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
