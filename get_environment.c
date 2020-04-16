#include "functions.h"

/**
 * get_environment - Fun will get the path from a environment
 * @env: Take environment
 * @name: Be the name from the env like "PATH"
 * Return: Char * with the path
 */
char *get_environment(char *name, char **env)/*fun*/
{
  int ite = 0;/*iterator initializate in zero*/
  char **token;/*char tokenizado double point*/
  while (env[ite] != NULL)/*loop array diff null*/
    {
      token = words(*(env + ite), "=");/*fun words*/
      if (_strcmp(token[0], name) == 0)/*fun _strcmp*/
	{
	  break;
	}
      free(token);/*free memory*/
      ite++;/*increment*/
    }
  return (token[1]);
}
