#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase  except q and e
 *
 * Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 97; chars <= 122; chars++)
	{
		if (chars != 113 && chars !=  101)
			putchar(chars);
	}
	putchar('\n');
	return (0);
}
