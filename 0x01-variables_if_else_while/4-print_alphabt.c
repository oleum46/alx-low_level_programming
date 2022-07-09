#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e.
 *
 * Reason: 0 on success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;

	}
	putchar('\n');
	return (0);
	
}
