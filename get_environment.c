#include "functions.h"
/**
 * get_environment - Fun will get the path from a environment
 * @env: Take environment
 * @name: Be the name from the env like "PATH"
 * Return: Char * with the path
 */

char *get_environment(char *name, char **env)/*fun*/
{
        int env_ite = 0;/*iterator initializate in zero*/
        char **argument;/*char tokenizado double point*/

        while (env[env_ite] != NULL)/*loop array diff null*/
        {
                argument = tokens(*(env + env_ite), "=");/*fun words*/
                if (string_compare(argument[0], name) == 0)/*fun string_compare*
/
                {
                        break;
                }
                free(argument);/*free memory*/
                env_ite++;/*increment*/
        }
        return (argument[1]);
}
~
