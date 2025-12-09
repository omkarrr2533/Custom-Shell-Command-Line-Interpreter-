#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOKEN_DELIMITERS " \t\r\n\a"

char **parse_line(char *line);

#endif
