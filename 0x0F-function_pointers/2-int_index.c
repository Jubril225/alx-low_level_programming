#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -  a function that searches for an integer.
 * @array: array of the integer
 * @size: size of the integer
 * @cmp: pointer to function of the3 in main
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
