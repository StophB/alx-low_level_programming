#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 99)
	{
		digit2 = digit1;
		while (digit2 <= 99)
		{
			if (digit2 != digit1)
			{
				putchar((digit1 / 10) + 48);
				putchar((digit1 % 10) + 48);
				putchar(' ');
				putchar((digit2 / 10) + 48);
				putchar((digit2 % 10) + 48);
				if (digit1 != 98 || digit2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
