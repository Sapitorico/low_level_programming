#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 97; chars <= 122; chars++)
		putchar(chars);
	putchar('\n');
	return (0);
}
