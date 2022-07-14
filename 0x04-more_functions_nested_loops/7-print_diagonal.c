#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed.
 * Return: If n is 0 or less, the function should only print a \n.
 */
void print_diagonal(int n)
{
	int w, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (w = 0; w < n; w++)
		{
			for (i = 0; i < w; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
