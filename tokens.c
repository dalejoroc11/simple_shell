#include "functions.h"
/**
 * tokens - This function will tokenize and return the array of strings
 * @line: What is previously read by the input
 * @sep: The separator that we want to tokenize from
 * Return: A pointer to pointer of chars
 */
char **tokens(char *line, char *sep)
{
	char **split;
	char *word;
	int i = 0, item = 0;
	/*int lenght = _strlen(line);*/

	item = _string_len(line);
	split = malloc(sizeof(char *) * item);
	if (split == NULL)
		return (NULL);
	word = strtok(line, sep);
	while (word != NULL)
	{
		split[i] = word;
		i++;
		word = strtok(NULL, sep);
	}
	split[i] = NULL;
	return (split);
}
