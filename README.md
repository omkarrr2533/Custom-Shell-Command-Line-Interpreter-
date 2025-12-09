# Custom Shell Project

A fully functional Unix-like shell implementation in C.

## Features
- Execute system commands
- Built-in commands (cd, exit, help, history)
- I/O redirection (>, <, >>)
- Piping (|)
- Background processes (&)
- Signal handling (Ctrl+C, Ctrl+Z)
- Command history

## Project Structure
```
custom_shell/
├── src/           # Source files
├── include/       # Header files
├── obj/           # Object files
├── bin/           # Binary executable
├── tests/         # Test files
├── docs/          # Documentation
└── Makefile       # Build configuration
```

## Building
```bash
make
```

## Running
```bash
make run
# or
./bin/myshell
```

## Cleaning
```bash
make clean
```

## Usage
Once running, you can use standard shell commands:
- `ls`, `pwd`, `echo`, etc.
- `cd [directory]` - Change directory
- `exit` - Exit the shell
- `help` - Show help information
- `history` - Show command history

## Examples
```bash
myshell> ls -la
myshell> cat file.txt | grep "search"
myshell> echo "Hello" > output.txt
myshell> gcc program.c -o program &
```
