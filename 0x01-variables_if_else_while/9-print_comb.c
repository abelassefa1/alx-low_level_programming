#include <stdio.h>
/* more headers goes there *
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main()
{
	int i;
	while (i <=5)
	{
		putchar(i+'0');

			i++;

		putchar(',');
		putchar(' ');
	}
	return 0;
}
