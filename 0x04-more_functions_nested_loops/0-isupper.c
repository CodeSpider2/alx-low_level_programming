#include "main.h"
#include <stdio.h>
/**
 * _isupper - check whether a character is uppercase
 *@c: The argument the function takes
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
