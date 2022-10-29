#include "main.h"

/**
 * _islower - Entry
 *
 * @c: _islower input parameter
 * Return: nothing
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
