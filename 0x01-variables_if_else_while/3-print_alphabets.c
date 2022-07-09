#include <stdio.h>

/**
 * main - prints the alphabet in lower case and then uppercase
 *
 * Return: 0 success
 */

int main(void)
{
	char c = 'a';
	char f = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (f <= 'Z')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
