#include "functions.h"
/**
 * string_concat - This will concatenate three strings
 * @s1: First string
 * @s2: Second string
 * @s3: Third string
 * Return: a pointer or NULL
 */
char *string_concat(char *s1, char *s2, char *s3)
{
	int i, j, k;
	int len1 = 0, len2 = 0, len3 = 0;
	char *target;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s3 == NULL)
		s3 = "";
	len1 = _string_len(s1);
	len2 = _string_len(s2);
	len3 = _string_len(s3);

	target = malloc((len1 + len2 + len3 + 1));

	if (target == NULL)
	{
		free(target);
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			target[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			target[i + j] = s2[j];
		}
		for (k = 0; k <= len3; k++)
		{
			target[i + j + k] = s3[k];
		}
	}
	return (target);
}
