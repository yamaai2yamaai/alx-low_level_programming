#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n = n % 10;
	if (n > 5)
		printf("Last digit of %d and is greater than 5", n);
	else if (n == 0)
		printf("Last digit of %d and is zero", n);
	else if (n < 6 && n != 0)
		printf("last digit of %d and is less than 6 and not 0", n);
	printf("\n");

	return (0);
}
