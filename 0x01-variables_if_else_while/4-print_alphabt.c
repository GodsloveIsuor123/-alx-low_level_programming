#include <stdio.h>
/**
 * main- main block
 * Description:  prints the alphabet in lowercase, followed by a new line
 * print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'd')
	{
		putchar(c);
		c++;
		continue;
	}
	c = 'f';
	while (c <= 'p')
	{
		putchar(c);
		c++;
		continue;
	}
	c = 'r';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
