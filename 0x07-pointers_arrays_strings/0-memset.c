#include "main.h"

/**
 * _memset - function that fill the first n byte of the memory area
 * @s: constant 1
 * @b: constant 2
 * @n: funtion fills the first n bytes of the memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
