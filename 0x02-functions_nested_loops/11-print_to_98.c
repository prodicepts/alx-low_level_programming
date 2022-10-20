#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print from any number to 98 countdown or up.
 * @n: integer argument
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
			if (n != 98)
				printf("%d,", n--);
			else
				printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			if (n != 98)
				printf("%d,", n++);
			else
				printf("%d\n", n);
	}
}
