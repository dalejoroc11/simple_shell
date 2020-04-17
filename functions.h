#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define _POSIX_SOURCE
#define _GNU_SOURCE
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

char *path_function(char *cont, char **env);
char *string_concat(char *s1, char *s2, char *s3);
int string_compare(char *s1, char *s2);
int _string_len(char *s);
char *get_environment(char *name, char **env);
char *_read_line(ssize_t *c);
char **tokens(char *line, char *sep);

#endif
~
