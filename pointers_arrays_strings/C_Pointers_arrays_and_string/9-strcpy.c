include "main.h"
/**
 * *_strcpy -  function that copies the string
 * @src: pointer to the strign
 * @dest: string copy destination
 *
 * Return: returns copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *copy = dest;	/*store the memory address of de dest in an auxiliary pointer*/

	while ((*copy++ = *src++) != '\0')	/*copy the values pointed to by src into dest*/
		;
	return (dest);
}
