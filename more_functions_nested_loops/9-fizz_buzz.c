#include "main.h"
/**
 * main - prints the numbers from 1 to n
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)	/*if the remainder is 0*/
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)	/*prints spaces after all less than 100*/
			printf(" ");
	}
	printf("\n");
	return (0);
}
