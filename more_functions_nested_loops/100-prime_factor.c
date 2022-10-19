#include "main.h"
/**
 * max_prime_factors - calculates the largest prime factorial of a number
 * @n: polynomial
 *
 * Return: largest prime factorial of the received number
 */
long max_prime_factors(long n)
{
	long int maxfact = -1, i = 3;

	for (; n % 2 == 0;)
	{
		maxfact = 2;
		n = n / 2;	/*reduce n by dividing this by 2*/
	}
	for (; i <= sqrt(n); i += 2)/*increase by 2, to obtain only odd numbers*/
	{
		for (; n % i == 0;)
		{
			maxfact = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maxfact = n;
	}
	return (maxfact);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;

	printf("%ld\n", max_prime_factors(n));
	return (0);
}
