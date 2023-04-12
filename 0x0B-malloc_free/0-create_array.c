#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array -  a function that creates an array of chars
 * @size: size of array
 * @c: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
