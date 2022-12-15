#include "main.h"
/**
 * _isupper - check whether a character is uppercase
 *@c: The argument the function takes
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
