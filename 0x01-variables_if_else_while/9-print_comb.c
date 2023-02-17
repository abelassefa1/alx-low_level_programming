#include <stdio.h>
/* more headers goes there *
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main()
{
	int s = 0, e = 9;

	while (s <= e)

	{
		putchar(s +'0');
		if (s!=e)
		{
		putchar(',');
		putchar(' ');
	}
		s++;
	}
	putchar('\n');

	return 0;
}
