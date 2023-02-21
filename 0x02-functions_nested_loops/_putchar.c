#include <unistd.h>

/*
 * _putchar - writesthe character
 * Return: always (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
