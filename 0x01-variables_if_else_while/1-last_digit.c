#include <stdio.h>
#include <time.h>
/* more headers go there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	m = n % 10
	if (m > 5)
		printf("last digit of %d is %d is greater than 5\n", n, m);
	if (m == 0)
		printf("last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
