#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-13);
    printf("%d\n", r);
    r = _abs(20);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(100);
    printf("%d\n", r);
    return (0);
}
