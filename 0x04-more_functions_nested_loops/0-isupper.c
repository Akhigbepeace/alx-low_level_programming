#include "main.h"

/**
 * main - check if a letter is in uppercase
 * @x: The number to be checked
 * Return: 1 for upper letter and 0 for otherwise
*/


int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
