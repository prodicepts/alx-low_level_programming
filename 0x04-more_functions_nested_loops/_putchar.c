#include <unistd.h>
#include "main.h"
/**
 * _putchar - write the character c to the stdoutput
 * @c: character to print
 * Return: 1 if success and -1 if it fails.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
