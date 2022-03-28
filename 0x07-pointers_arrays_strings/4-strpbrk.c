#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int r = 0, t;

	while (s[r])
	{
		t = 0;
		while (accept[t])
		{
			if (s[r] == accept[t])
			{
				s += r;
				return (s);
			}
			t++;
		}
		r++;
	}
	return ('\0');
}
