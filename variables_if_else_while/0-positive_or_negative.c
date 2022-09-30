#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));		/*initializes and only calls it one bird per second*/
	n = rand() - RAND_MAX / 2;	/*returns an integer between 0 and RAND_MAX / 2*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
}
