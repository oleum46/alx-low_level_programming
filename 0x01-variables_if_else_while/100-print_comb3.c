#include <stdio.h>

/**
 * main - print combination of two digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '9')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a == '9' && b == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		if (b >= '9')
		{
		b = '1';
		}
		a++;
	}
	return (0);
}
