#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (j + i < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
