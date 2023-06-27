#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	
	while (i--)
	{
		_putchar(s[i]);
	}
}
