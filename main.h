#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define BUFF_SIZE 1024


int _putchar(char c);
int _printf(const char *format, ...);
int handler_char(va_list list);
int handler_int(va_list list);
int handler_ptr(va_list list);
int handler_double(va_list list);
int unsigned_int(va_list list);
int unsigned_hex(va_list list);
int unsigned_octal(va_list list);
int unsigned_capital(va_list list);
int handler_string(va_list list);
int handle_format(char f, va_list list);
int last_char_handler(char m, va_list list);

#endif
