# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude
LDFLAGS = 

# Directories
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin

# Source files
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Target executable
TARGET = $(BINDIR)/myshell

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS) | $(BINDIR)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET) $(LDFLAGS)
	@echo "Build successful! Executable: $(TARGET)"

# Compile source files to object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create directories if they don't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)

$(BINDIR):
	mkdir -p $(BINDIR)

# Clean build files
clean:
	rm -rf $(OBJDIR) $(BINDIR)
	@echo "Clean complete!"

# Run the shell
run: $(TARGET)
	@echo "Starting MyShell..."
	@$(TARGET)

# Install (optional - copies to /usr/local/bin)
install: $(TARGET)
	@echo "Installing myshell to /usr/local/bin (requires sudo)"
	sudo cp $(TARGET) /usr/local/bin/myshell
	@echo "Installation complete!"

# Uninstall
uninstall:
	@echo "Removing myshell from /usr/local/bin (requires sudo)"
	sudo rm -f /usr/local/bin/myshell
	@echo "Uninstall complete!"

# Show help
help:
	@echo "MyShell Makefile Commands:"
	@echo "  make          - Build the project"
	@echo "  make clean    - Remove build files"
	@echo "  make run      - Build and run the shell"
	@echo "  make install  - Install to system (requires sudo)"
	@echo "  make uninstall- Remove from system (requires sudo)"
	@echo "  make help     - Show this help message"

# Phony targets
.PHONY: all clean run install uninstall help