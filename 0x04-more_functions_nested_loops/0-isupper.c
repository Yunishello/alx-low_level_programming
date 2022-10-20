#include "main.h"
#include <stdio.h>

/*
 * main - check the code
 *
 * Return: always 0.
 */
int _upper(int c);

int main(void)
{
	char c;

	c = 'A';
	printf('%c: %d\n',c, _upper(c));
	c = 'a';
	printf('%c: %d\n', c, _upper(c));
	return(0);
}

int _upper(int c) 
{
	return upper(c);
}
