#include <stdio.h>
/**
 * main - prints all possible combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');
	if (n == 9)
	putchar(n);
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}

