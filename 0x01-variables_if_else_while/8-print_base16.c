 #include <stdio.h>

/**
 * main - Entry point for Hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
