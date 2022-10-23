#include "main.h"
/**
 * create_array - creates an array of constat chars
 * @size: size of the array
 * @c: specific char
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	/*set a pointer to a place with no data, i.e. the pointer exists but is not initialized, it is assigned the reserved word NULL */
	char *arr = NULL;	/*assigns a base value for the pointer, in this case NULL, it is a good practice to do so, and we can also use this same variable to return to its base value*/

	if (!size)	/*check to receive a valid size to allocate*/
		return (arr);
	arr = malloc(sizeof(char) * size);	/*the exact space for storing the required data is allocated*/
	if (!arr)	/*malloc fails and the memory it allocates is not enough and goes into memory that does not belong to it.*/
		return (arr);	/*malloc() returns a null pointer (NULL) to indicate that there is no memory available, or that some other error has occurred that prevented the memory from being allocated. */
	arr = _memset(arr, c, size);	/*initialize it with a specific character.*/
	return (arr);
}
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the array address
 * @b: is the added constant character or bytes
 * @n: the constant number of bytes b
 *
 * Return: returns the initial position of the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
