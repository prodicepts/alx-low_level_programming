#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character value of the argument
 * Return : 1 if _islower is lowercase, 0 if its not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
