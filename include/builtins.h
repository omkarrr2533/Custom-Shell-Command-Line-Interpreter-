#ifndef BUILTINS_H
#define BUILTINS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int shell_cd(char **args);
int shell_exit(char **args);
int shell_help(char **args);
int shell_history(char **args);

#endif
