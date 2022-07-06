#include <stdio.h>
#include <unistd.h>

/**
 * main - prints out the last part of a quote in a standarderror
 *Return: 1 if Success.
 */

int main(void)
	
{
	write(2, "and that piece of art is useful - Dora Ko		rpar, 2015-10-19\n", 58);
	return(1);
}
