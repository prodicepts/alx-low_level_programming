#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: integer argument
 *
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
