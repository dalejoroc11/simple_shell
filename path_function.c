#include "functions.h"
/**
 * path_function - Function to check if the value is in the PATH
 * @cont: The char previously read by the input
 * @env: The environ
 * Return: A concatenated string with the new path or cont if it fails
 */
char *path_function(char *cont, char **env)
{
	char *env_value, *key = "/", *path_next = NULL;
	char **split = NULL;
	int  equivalence = 1;
	int i = 0;

	env_value = get_environment("PATH", env);
	split = tokens(env_value, ":");
	while (split[i])
	{
		path_next = string_concat(split[i], key, cont);
		equivalence = access(path_next, X_OK);
		if (equivalence == 0)
		{
			return (path_next);
			/*free(path_next);*/
			break;
		}
		else
		{
			free(path_next);
			i++;
		}
	}
	free(split);
	return (cont);
}
