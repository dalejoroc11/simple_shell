#include "functions.h"
/**
 *
 *
 */
int main(int argc, char *argv[], char **env)
{
	char *cont, *result;
	char **tokenizado;
	int status = 0, val_fd = 0, comp = 0, i = 0;
	ssize_t c;
	pid_t hijo;

	while (1)
	{
		hijo = fork();
		if (hijo == -1)
		{
			perror("Error: hijo");
			return (-1);
		}
		val_fd = isatty(STDIN_FILENO);
		if (hijo == 0)
		{
			if (argc == 1)
			{
				if (val_fd != 0)
					write(1, "Saroco83-dalejoroc11 $ ", 10);
				cont = _read_line(&c);
				if (c == EOF)
				{
					free(cont);
					write(1, "\n", 2);
					exit(3);
				}
				if (*cont == '\n')
				{
					free(cont);
					return (0);
				}
				tokenizado = tokens(cont, " \t\r\n");
				comp = string_compare(tokenizado[0], "exit");
				if (comp == 0 && tokenizado[1] == NULL)
				{
					free(tokenizado);
					free(cont);
					exit(3);
				}
				comp = string_compare(tokenizado[0], "env");
				if (comp == 0)
				{
					while (env[i] != NULL)
					{
						write(1, env[i], _string_len(env[i]));
						write(1, "\n", 1);
						i++;
					}
				}
				result = path_function(tokenizado[0], env);
				if (execve(result, tokenizado, NULL) == -1)
				{
					free(result);
					free(tokenizado);
					perror(argv[0]);
					if (val_fd == 0)
						exit(2);
					return (1);
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
	}
	return (0);
}
