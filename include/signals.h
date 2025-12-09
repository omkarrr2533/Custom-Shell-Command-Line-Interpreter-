#ifndef SIGNALS_H
#define SIGNALS_H

#include <signal.h>
#include <stdio.h>

void setup_signals(void);
void handle_sigint(int sig);

#endif
