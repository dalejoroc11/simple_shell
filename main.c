#include "functions.h"
/**
 *
 *
 *
 */

int main(int argc, char *argv[], char **env)
{
        char *cont, *result, *line = NULL;
        char **tokenizado;
        int status = 0, val_fd = 0, comp = 0, i = 0;
        ssize_t bufsize = 0;
        pid_t hijo;

        while (1)
        {
               

                        if (argc == 1)
                        {
                               	write(1, "Saroco83-dalejoroc11$ ", 10);
                                cont = getline(&line, &bufsize, stdin);
                                }
                                tokenizado = words(cont, " \t\r\n");
                                comp = strcmp(tokenizado[0], "exit");
                                comp = strcmp(tokenizado[0], "env");
                                if (comp == 0)
                                {
                                        while (env[i] != NULL)
                                        {
                                                write(1, env[i], _strlen(env[i]));
                                                write(1, "\n", 1);
                                                i++;
                                        }
                                }
                                        result = l_path(tokenizado[0], env);
                        
                        }
                }
                else
                {
                        wait(&status);
                        status = WEXITSTATUS(status);
			            if (status == 2)
				                exit(127);
                        if (val_fd == 0 || status == 3)
                        {
                                break;
                        }
                }
        }
        return (0);
}
