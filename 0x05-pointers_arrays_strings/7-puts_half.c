#include "main.h"
/**
 * puts_half - half of a string
 * @str: char
 * peace
 * Return: 0 is
 */

void puts_half(char *str)
{
	int string = 0, n;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		n = (string - 1) / 2;
	else
		n = (string / 2);
	n++;

	for (string = n; str[string] != '\0'; string++)
		_putchar(str[string]);
	_putchar('\n');
}

