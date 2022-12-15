#include "main.h"

/**
 * print_most_numbers - Prints all numbers between 0 to 9 but 2 and 4
 *
 * 
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
			num++;
	}
	_putchar('\n');
}

