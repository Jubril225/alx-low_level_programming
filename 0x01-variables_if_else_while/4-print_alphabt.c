#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for print entire lowercase alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'a' ; d <= 'z' ; d++)
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}
	}
	putchar('\n');
	return (0);
}
