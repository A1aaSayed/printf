#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#define BUFF_SIZE 1024


int _putchar(char c);
int _strlen (char *p);
int p_char(va_list list);
int p_percent(va_list list);
int p_string(va_list list);
int p_int(va_list args);


int _printf(const char *format, ...);

#endif
