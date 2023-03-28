#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @p: int type array pointer
 * @i: int type integer
 */
void print_array(int *p, int i)
{
	int n;

	n = 0;
	for (i--; i >= 0; i--, n++)
	{
		printf("%d", p[n]);
		if (i > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
