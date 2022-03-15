#include <stdio.h>

/**
 * main - Prints the numbers of modulo 10
 *  Return: 0 Always (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
