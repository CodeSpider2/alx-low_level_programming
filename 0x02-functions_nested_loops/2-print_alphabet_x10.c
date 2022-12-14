#include "main.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int i ;

	for (a = 'a'; a <= 'z'; a++)
	{
	for(i = 0; i < 10; i++) 
	{
		_putchar(a);
	}
	}
_putchar('\n');
}
