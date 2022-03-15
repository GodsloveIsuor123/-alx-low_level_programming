#include <stdio.h>
/**
 * main- main block
 * Description:  prints the alphabet in lowercase, followed by a new line
 * print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char a;

	for  (a = 'a'; a <= 'z'; a++)

	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
