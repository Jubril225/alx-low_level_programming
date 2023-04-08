#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: Arguement count
 * @argv: Arguement vector
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if(argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
