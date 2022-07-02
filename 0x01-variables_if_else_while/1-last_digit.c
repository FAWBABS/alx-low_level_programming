#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigning a random number to a variable and checking if the last digit is 5, equals 0, and less than 6 and not 0
 *Description: print last diit in random number

 * Return: Always 0(Success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of d% is d% and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of d% is d% and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of d% is d% and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
