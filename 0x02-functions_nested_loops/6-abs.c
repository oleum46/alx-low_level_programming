#include "main.h"

/**
 * _abs - calculate the absolute value of number from zero.
 *
 * @i: the integer to be calculated.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
