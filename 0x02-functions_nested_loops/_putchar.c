#include <unistd.h>
/**
 * _pustchar - write the character c to stdout
 * @c the character to print
 * Return: 0
 */
int _putchar(char c)
{
       	return (write(1, &c, 1));
}
