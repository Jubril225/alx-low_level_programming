#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - function that concatenates all the arguements of your program
 * @ac: argument 1
 * @av: argument 2
 *
 * Return: a pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		len = 0;
		while (ac[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++;
	}

	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[total_len] = av[i][j];
			total_len++;
		}
		str[total_len] = '\n';
		total_len++;
	}
	str[total_len] = '\0';

	return (str);
}
