#include <stdio.h>
/**
 * mian - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 90; rev >= 65; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
