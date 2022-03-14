#include <stdlib.h>
#include <time.h>
/**
 * main- main block
 *  Desciption : Print statements based on the last digit of the random number
 *  Return: 0
*/
int main(void)
{
	int n;
	int lastdigit;
	char str[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, lastdigit);
	else if (lastdigit == 0)
		printf("%s %d is %d and is 0\n", str, n, lastdigit);
	else if (lastdigit > 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lastdigit);

	return (0);
}
