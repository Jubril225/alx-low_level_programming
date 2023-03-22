#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: Parameter to be checked
 *
 * Return: Return 1 if it an alphabet
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 c <= 90))
		return (1);
	else
		return (0);
}
