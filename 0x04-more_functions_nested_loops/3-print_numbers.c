#include "main.h"
/**
 * print_numbers - Print Numbers from 0 to 9
 *
 * Return: 0 always
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');
	_putchar('\n');
}
