#include <stdio.h>

/**
 * main - Prints all single digit numbers 0-10.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
		putchar((d % 10) + '0');

	putchar('\n');

	return (0);
}
