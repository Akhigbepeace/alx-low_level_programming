#include <stdio.h>

/**
 *main - Entry point
 *description - 'print numbers in base 10'
 *Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}

	putchar('\n');
	return (0);
}
