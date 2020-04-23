#include "functions.h"
/**
 * _read_line - Funtion that will read the input
 * @c: This will be a flag to identify an exit
 * Return: this will be the previously read line
 */
char *_read_line(ssize_t *c)
{
	char *input = NULL;
	size_t bufsize = 0;

	*c = getline(&input, &bufsize, stdin);
	return (input);
}
