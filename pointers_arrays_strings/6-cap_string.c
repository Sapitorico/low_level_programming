#include "main.h"
/**
 */
char *cap_string(char *str)
{
	char *ch = string_toupper(str);

}
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
