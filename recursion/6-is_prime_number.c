#include "main.h"
/**
 * is_prime_number - function to identify prime numbers
 * @n: number
 *
 * Return: number is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)	/*prime is a natural number greater than 1*/
		return (0);
	return (_prime(n, 2));	/*2 is the first prime number*/
}
/**
 * _prime - identify prime
 * @n: num
 * @i: prime
 *
 * Return: 1 if the integer is prime, 0 if not prime
 */
int _prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)	/*if n prime has only two divisors 1 and itself*/
		return (0);
	return (_prime(n, i + 1));
}
