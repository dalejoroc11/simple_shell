#include "functions.h"
/**
* _string_len - This will count the number of characters from a string
* @s: Parameter
* Return: Will return the number of char
*/
int _string_len(char *s)
{
	char *a = s;

	while (*a)
	{
		++a;
	}
	return (a - s);
}
