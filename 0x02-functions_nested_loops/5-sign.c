#include "main.h"
/**
 * print_sign - print the sign before any given number
 * @n: interger  argument
 *
 * Return: if n is > zero, return 1, if less than zero return -1, if equal zero
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	if (n < 0)
		_putchar('-');
		return (-1);
	if (n == 0)
		_putchar('0');
		return (0);
}
