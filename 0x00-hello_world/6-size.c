#include<stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;        
printf("Size of a char: %ld 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %ld 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %ld 4 byte(s)\n" (unsigned long)sizeof(c));
printf("Size of a long long int: %ld 8 byte(s)\n" (unsigned long)sizeof(d));
printf("Size of a float: %ld 4 byte(s)\n" (unsigned long)sizeof(f));
return (0);
}
