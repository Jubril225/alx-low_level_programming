#include "main.h"

/**
 * _strlen - Check the length of a string
 * @s: string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i;/*for iterating the values*/
	int length = 0;/*to store the length of the string*/

	for (i = 0; s[i] != '\0' ; i++)
	{
		length++;
	}
	return (length);
}
