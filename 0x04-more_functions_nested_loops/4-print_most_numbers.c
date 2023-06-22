#include "main.h"

/**
 * print_most_numbers - it prints numbers rom 0 to 9 without 2 and 4
 *
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + 48)
		else
			continue;
	}
	_putchar("\n");
}
