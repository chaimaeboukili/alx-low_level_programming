#include <stdio.h>
/**
 * main - entry point  prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
