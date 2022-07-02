#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigning a random number to a variable and checking if the last digit is 5, equals 0, and less than 6 and not 0.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("%dLast digit of i% is i% and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("%dLast digit of i% is i% and is 0\n", n, last);
	}
	else
	{
		printf("%dLast digit of i% is i% and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
