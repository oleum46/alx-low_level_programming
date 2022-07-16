#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To determine if a random number is positive or negative or zero.
 *
 * Return: 0 on success.
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
}
