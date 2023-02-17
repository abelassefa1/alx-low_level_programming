#include <stdio.h>
/**
 * main - main block 
 * Description: print the alphabet in lowercase and the uppercase
 * Return : 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';
	while(c <= 'Z')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
