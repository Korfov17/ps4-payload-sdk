#pragma once

#include "libc.h"

char *replace_str( char *str,  char *orig,  char *rep);

int split_string(char *str, char c, char ***arr);

char *read_string(int f);