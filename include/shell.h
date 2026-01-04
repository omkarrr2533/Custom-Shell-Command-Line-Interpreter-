#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Global shell state 
extern int shell_running;

// Shell core functions
void shell_init(void);
void shell_loop(void);
void shell_cleanup(void);

#endif
