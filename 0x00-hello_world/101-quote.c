#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a quote using the write function
 *    ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: 1 (not success)
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, qou, 59);
	return (1);
}
