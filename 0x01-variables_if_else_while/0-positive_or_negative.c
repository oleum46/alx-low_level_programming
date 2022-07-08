#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - A program to determine whether a random number is positvie negative or zero
 *
 * return 0 for success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n<0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	
	return (0);

	
}
