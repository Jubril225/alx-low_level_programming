#include "main.h"

/**
 * _strncat - concatinates two strings
 *@dest: string destination
 *@src: source string
 *@n: number of characters to be appended (bytes)
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length = 0;
	int src_length = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		dest_length++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		src_length++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_length + i] = src[i];
	}
	return (dest);
}
