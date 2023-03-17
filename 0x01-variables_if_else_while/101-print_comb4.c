#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j;
	int m;

	while (i <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			j = 0;
			while (j <= 9)
			{
				if (j != m && m != i && i < m && m < j)
				{
					putchar('0' + i);
					putchar('0' + m);
					putchar('0' + j);

					if (j + m + i != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j++;
			}
			m++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
