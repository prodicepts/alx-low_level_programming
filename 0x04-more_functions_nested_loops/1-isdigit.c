#include "main.h"
/**
 * _isdigit - Check if argument supplied is a number btw 0-9
 * @c: argument supplied
 *
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= 0 && c <= 9)
		y = 1;
	return (y);
}
