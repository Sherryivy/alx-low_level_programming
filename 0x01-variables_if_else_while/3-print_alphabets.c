#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns both alphabets lower and upper cases
 * Return: 0
 */
int main(void)
{
	int ch = 'n';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
