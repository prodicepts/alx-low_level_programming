#include "main.h"
/**
 * print_numbers - Print Numbers from 0 to 9
 *
 * Return: 0 always
 */
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar("%d", i);
		_putchar("\n");
	}
}
