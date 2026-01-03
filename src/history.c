#include "../include/history.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *history[MAX_HISTORY];
static int history_count = 0;

void init_history(void) {
    int i;
    for (i = 0; i < MAX_HISTORY; i++) {
        history[i] = NULL;
    }
    history_count = 0;
}
void add_to_history(char *cmd) {
    if (cmd == NULL || strlen(cmd) == 0) {
        return;
    }
    // If history is full, remove oldest entry
    if (history_count >= MAX_HISTORY) {
        free(history[0]);
        int i;
        for (i = 0; i < MAX_HISTORY - 1; i++) {
            history[i] = history[i + 1];
        }
        history_count = MAX_HISTORY - 1;
    }
    
    // Add new command
    history[history_count] = strdup(cmd);
    history_count++;
}

void show_history(void) {
    if (history_count == 0) {
        printf("No commands in history.\n");
        return;
    }
    
    printf("\n╔════════════════════════════════════════════════════════╗\n");
    printf("║                   Command History                      ║\n");
    printf("╠════════════════════════════════════════════════════════╣\n");
    
    int i;
    for (i = 0; i < history_count; i++) {
        printf("  %3d  %s\n", i + 1, history[i]);
    }
    
    printf("╚════════════════════════════════════════════════════════╝\n\n");
}

void clear_history(void) {
    int i;
    for (i = 0; i < history_count; i++) {
        if (history[i] != NULL) {
            free(history[i]);
            history[i] = NULL;
        }
    }
    history_count = 0;
}

char *get_history_command(int index) {
    if (index < 0 || index >= history_count) {
        return NULL;
    }
    return history[index];
}
