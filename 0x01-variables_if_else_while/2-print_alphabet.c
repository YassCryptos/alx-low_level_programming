#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Lowercase & Uppercase
 *
 * Return: End of the programme
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	

	return (0);
}
