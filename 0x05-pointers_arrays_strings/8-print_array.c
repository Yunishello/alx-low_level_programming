#include <stdio.h>
#include "main.h"

/**
 * main - function that  print n element of an array of integer
 * and print new line
 *@print_array: accept parametal a and n
 *@a: accept an integer
 *@n: accept an integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
