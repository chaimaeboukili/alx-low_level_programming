#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @led: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int led)
{
	int med;

	med = (led % 10);

	if (med < 0)
	{
		med = (-1 * med);
	}

	_putchar(med + '0');
	return (med);
}
