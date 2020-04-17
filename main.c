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
      val_fd = isatty(STDIN_FILENO);
      if (hijo == 0)
	{
	  if (argc == 1)
	    {
	      write(1, "#cisfun$ ", 10);
	      cont = read_line(&c);
	      tokenizado = words(cont, " \t\r\n");
	      comp = _strcmp(tokenizado[0], "exit");
	      comp = _strcmp(tokenizado[0], "env");
	      while (env[i] != NULL)
		{
		  write(1, env[i], _strlen(env[i]));
		  write(1, "\n", 1);
		  i++;
		}

	      result = l_path(tokenizado[0], env);
	    }
	}
