#include "main.h"

/**
 * print_alphabet_x10 - function that print 10 times
 * a string of alphabets
 * Return: no return value
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int s = 'a';

	while (i < 10)
	{
		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		s = 'a';
		i++;
		_putchar('\n');
	}
}
