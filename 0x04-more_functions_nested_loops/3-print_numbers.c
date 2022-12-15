#include <main.h>
/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line
 *
 * Return:0.
 */
void print_numbers(void)
{
	int i = 0;

	while(i<10)
	{
		_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
