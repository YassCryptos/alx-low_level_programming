#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function will print the all combination of
 * Two two digits without repeating the combination by using putchar
 *
 * Return: End Of Programme
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
