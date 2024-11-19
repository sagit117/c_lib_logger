#ifndef LOGGER_H
#define LOGGER_H

#ifndef _STDIO_H
#include <stdio.h> // FILE
#endif

#define PRINT_BLACK   "\033[22;30m"
#define PRINT_RED     "\033[22;31m"
#define PRINT_GREEN   "\033[22;32m"
#define PRINT_BROWN   "\033[22;33m"
#define PRINT_BLUE    "\033[22;34m"
#define PRINT_MAGENTA "\033[22;35m"
#define PRINT_CYAN    "\033[22;36m"
#define PRINT_GRAY    "\033[22;37m"
#define PRINT_YELLOW  "\033[01;33m"

#define PRINT_RST     "\033[0m"

enum LogLevel {
    ALL = 0,
    DEBUG = 10, 
    INFO = 20, 
    WARNING = 30, 
    ERROR = 40
};

typedef struct {
    int level;
    FILE *out;
    int max_size;
} Logger;

void log_error(const char *message, ...);
void log_warning(const char *message, ...);
void log_info(const char *message, ...);
void log_debug(const char *message, ...);
void log_message(const int level, const char *fmt, ...);

#endif