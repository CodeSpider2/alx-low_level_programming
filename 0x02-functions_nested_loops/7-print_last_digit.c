#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;
	_putchar(last);
	return (last);
}
