#include "../include/shell.h"
#include "../include/signals.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Setup signal handlers
    setup_signals();
    
    // Initialize shell
    shell_init();
    
    // Display welcome message
    printf("\n");
    printf("╔════════════════════════════════════════╗\n");
    printf("║     Welcome to MyShell v1.0            ║\n");
    printf("║     Type 'help' for commands           ║\n");
    printf("║     Type 'exit' to quit                ║\n");
    printf("╚════════════════════════════════════════╝\n");
    printf("\n");
    
    // Main shell loop
    shell_loop();
    
    // Cleanup and exit
    shell_cleanup();
    
    return EXIT_SUCCESS;
}