#ifndef HISTORY_H
#define HISTORY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HISTORY 100

// History management
void init_history(void);
void add_to_history(char *cmd);
void show_history(void);
void clear_history(void);
char *get_history_command(int index);

#endif