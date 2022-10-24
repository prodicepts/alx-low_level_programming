#include "main.h"
/**
 * print_line - print _ in  argument times
 * @n: argunment
 *
 * Return: 0 always
 */
void print_line(int n)
{
	int begin = 1;

	while (begin <= n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
