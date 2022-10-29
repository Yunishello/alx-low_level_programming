#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
