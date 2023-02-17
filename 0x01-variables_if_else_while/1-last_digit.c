#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate random number
 * Return: 0
 */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last didgit %d is ", n);
	num = n % 10;
	if (num > 5)
	{
		printf("%5d and is greater than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}
