#include <stdio.h>

 /* main - Entry point
  *
  *Description: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 , followed by space
  *
 * Return: Always 0 (Success)
 */

int main(void)
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
