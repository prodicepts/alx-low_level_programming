#include "main.h"
/**
 * _isupper - check ifthe argument is upper case
 * @c: argument to check
 *
 * Return: return 1 if true and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
