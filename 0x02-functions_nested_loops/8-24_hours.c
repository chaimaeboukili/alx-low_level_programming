#include "main.h"

/**
 * jack_bauer - a function that prints every h and m of the day
 * from 00:00 to 23:59
 * return: 1440 line output
 */

void jack_bauer(void)
{
	int	h = 0;
	int	min = 0;

	while (h < 24)
	{
		while (min < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		min = 0;
		h++;
	}
}
