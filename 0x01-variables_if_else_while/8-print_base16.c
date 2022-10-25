#include <stdio.h>

/**
 * main - to base 16
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char i;

	for (n = 0; n <= 10; n++)
		putchar(n);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
