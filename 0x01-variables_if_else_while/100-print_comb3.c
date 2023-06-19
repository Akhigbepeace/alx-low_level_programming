#include <stdio.h>

/**
	*main - Entry point
	*description - 'prints all possible different combinations of two digits'
	*Return: Always 0
*/

int main(void)
{
	int d, p;

	for (d = 0; d < 9; d++)
	{
		for (p = d + 1; p < 10; p++)
		{
			putchar((d % 10) + '0');
			putchar((p % 10) + '0');

			if (d == 8 && p == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

